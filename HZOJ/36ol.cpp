/*************************************************************************
	> File Name: 36ol.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月18日 星期二 19时44分01秒
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000
int init(int i,int base){
    int tmp = i;
    int sum = 0;
    while(tmp){
      sum = sum * base + tmp % base;
        tmp /= base;
    }
    return sum == i;
}
int main(){
    int sum = 0;
    for(int i = 1; i < max_n; i += 2){
        if(init(i , 10) && init(i, 2) ) sum += i;
}
    printf("%d\n",sum);
    return 0;

}

