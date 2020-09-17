/*************************************************************************
	> File Name: 34ol.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月18日 星期二 18时43分39秒
 ************************************************************************/

#include <stdio.h>
 
#define max 2540160
 
int Iscurious(int num, int *mul){
	int store = num, sum = 0;
	while(num){
		sum += mul[num % 10];
		num /= 10;
	}
	return store == sum;
}
 
int main(){
	int mul[10] = {0};
	mul[0] = 1;
	for(int i = 1; i < 10; i++){
		mul[i] = mul[i - 1] * i;
	} 
	int sum = 0;
	for(int i = 3; i < max; i++){
		if(Iscurious(i, mul)) sum += i;
	}
	printf("%d\n",sum);
	return 0;
}
 


