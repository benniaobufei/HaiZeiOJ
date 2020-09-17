/*************************************************************************
	> File Name: ol34.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月19日 星期三 09时27分11秒
 ************************************************************************/

#include<stdio.h>
#define max 2540160
int init(int i, int *arr){
    int a = i;
    int sum = 0;
    while(a){
        sum += arr [a % 10];
        a /= 10;    
    }
    return sum == i;
}
int main(){
    int a, arr[10] = {1};
    int sum = 0;
    for(int i = 1; i < 10; i++){
        arr[i] = arr[i-1] * i;
        printf("%d\n", arr[i]);
    }
    for(int i = 3; i < max; i++){
       if( init(i,arr)) sum += i; 
    }
    printf("%d",sum);
    return 0;
}
