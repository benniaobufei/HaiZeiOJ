/*************************************************************************
	> File Name: ex——gcd.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月06日 星期日 14时44分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
int gcd(int a ,int b, int *x, int *y){
    if(b == 0) {
        *x = 1, *y = 0;
        return a;
    }
    int xx, yy, ret = gcd(b , a % b, &xx, &yy);
    *x = yy;
    *y = xx - a % b * yy;
    return ret;
}
int main(){
    int x, y;
    int a, b;
    while(cin >> a >> b){
        cout <<"gcd ( " << a << " , " << b <<" ) = " << gcd(a, b, &x, &y) << endl;
        cout << a << " * " << x << " + " << b << " * " << y << " = " <<gcd(a , b , &x, &y);
    }

    return 0;
}
