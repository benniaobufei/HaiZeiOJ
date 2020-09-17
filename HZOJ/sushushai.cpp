/*************************************************************************
	> File Name: sushushai.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月28日 星期五 11时25分11秒
 ************************************************************************/

#include<stdio.h>
#define max_n 200000

int prime[max_n + n];
f[max_n + 5];
cnt[max_n + 5];

void init(){
    for(int i = 2; i <= max_n; i++){
        if(!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for(int j = 1; j <= prime[i]; j++){
            if(prime[j] * i > max_n )break;
            prime[prime[j] * i ] =1; 
            if(i % prime[j] == 0){
                f[prime[j] * i] = f[i] / cnt [i + 1] * cnt[ i + 2 ];
                cnt[prime[j] * i] = cnt[i] + 1; 
            } else {
                cnt[prime[j] * i] = 1;
                f[prime[j] * i] = f[prime[j]] * f[i];
            }

        }
    }return ;
}
