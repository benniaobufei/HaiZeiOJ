/*************************************************************************
	> File Name: 36ol.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月19日 星期三 14时48分47秒
 ************************************************************************/

#include <stdio.h>
 
#define max 1000000
 
int palindrome(int num, int base){
	int store = num, sum = 0;
	while(num){
		sum = num % base + sum * base;
		num /= base;
	}
	return sum == store;
}
 
int main(){
	int sum = 0;
	for(int i = 1; i < max; i += 2){
		if(palindrome(i, 10) && palindrome(i, 2)) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
