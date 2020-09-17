/*************************************************************************
	> File Name: 450.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月02日 星期三 20时31分48秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int num[105];
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> num[i];
    }
    sort(num, num + a);
    for(int i = 0; i < a;i++){
        if(i != 0){
        cout << " ";
    }
        cout << num[i];
    }
    return 0;
}
