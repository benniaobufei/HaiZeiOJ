/*************************************************************************
	> File Name: gcd.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月06日 星期日 11时21分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

int gcd(int a ,int b){
   if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    int x, y;

    while(cin >> x >> y){
        cout << gcd(x, y);
    }

    return 0;
}
