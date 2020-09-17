/*************************************************************************
	> File Name: 35ol.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月18日 星期二 18时48分37秒
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000
int prime[max_n + 5];
void init(){
    for(int i  = 2; i <= max_n ;i++){
        if(prime[i]) continue;
        prime[++prime[0]] = 1;
        for(int j = i;j <= max_n ;j += i){
         if(prime [j] % i != 0){
         prime[j] = 1;   
        }
            
    }return;

}
}
int main(){
    init();
    int x =0;
            int sum = 0; 
    for(int i = 1; i < prime[0]; i++){
        int tmp = prime[i];
        while(tmp){
            sum = sum *10 + tmp % 10;
            tmp /= 10;
        }
        if(sum == prime[i]){
            x++;
        
        }
    }printf("%d\n", x);
    return 0;

}
