/*************************************************************************
	> File Name: 448.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月02日 星期三 19时44分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int a, b, c = 0, num[105] = {0};
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> num[i];
    }
    cin >> b;
    for(int i = 0; i < a; i++){
        c = i + 1;
        if(b == num[i]){
            break;
        }
    }
        cout << c;
    
    return 0;
}

