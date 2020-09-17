/*************************************************************************
	> File Name: 0-7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月16日 星期三 10时10分30秒
 ************************************************************************/

#include<stdio.h>
#define max 76543210
int prime[max + 5] = {0};

void init(){
    for (int i = 2; i  <= max; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        } 
    }
}
int clac(int x){
    int num[10] = {0};
    int tmp = x;
    while(x){
        if (num[x % 10] || x % 10 > 7) return 0;
        num[x % 10]++;
        x /= 10;
    }
    return 1;
}
    
int main(){
    init();
    int x = 0;
    for(int i = 500000; i <= prime[0]; i++){
        if (prime[i] < 10000000) continue;
        if(clac(prime[i])){
            x++;
        }
    }
    printf("%d\n", x);

    return 0;
}
