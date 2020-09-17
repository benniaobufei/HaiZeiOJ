/*************************************************************************
	> File Name: 451.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月02日 星期三 20时48分35秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int num[100005];
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> num[i];
    }
    sort(num, num + a);
    for(int i = 0; i < a;i++){
        cout << num[i] << endl;
    }
    return 0;
}
