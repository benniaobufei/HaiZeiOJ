/*************************************************************************
	> File Name: test3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月16日 星期三 11时40分33秒
 ************************************************************************/
#include<stdio.h>
#include<math.h>
#include<inttypes.h>
int num[31] = {0};
int ans[31] = {0};
int main(){
    int x ;
    scanf("%d", &x);
        int a = 31;
    while(x){
        num[a] = x % 2;
        x /= 2;
        a--;
    }
    for(int i = 16; i < 32; i++){
        ans[i - 16] = num[i];
    }
    for(int i = 0; i < 16; i++){
        ans[16 + i] = num[i];
    }
    long long n = 0;
    for(int i = 31; i >= 0; i--){
        n += ans[31 - i] * pow(2 ,i);
    }
    printf("%lld",n);


    return 0;
}
