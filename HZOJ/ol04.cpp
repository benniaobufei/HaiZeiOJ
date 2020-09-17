/*************************************************************************
	> File Name: ol11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月20日 星期四 20时44分02秒
 ************************************************************************/

#include <stdio.h>
int init(int c){
    int sum = 0;
    int a = c;
    while(c){
        sum = sum * 10 + c % 10 ;
        c /= 10;
    }
    return a == sum;
}
int main() {
    int a = 0;
    for(int i = 100 ;i < 1000; i++ ){
        for(int j = i; j < 1000;j++){
            int c = i * j; 
            if(init(c) && a < c) {
                a = c ;
            }
        } 
    }
    printf("%d\n", a);
    return 0;
}
