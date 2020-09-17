/*************************************************************************
	> File Name: ol30.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月22日 星期六 20时48分51秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

const int max = pow(9, 5) * 6;
int is_val(int a){
    int sum = 0;
    int tmp = a;
    while(a){
        sum += pow(a % 10, 5);
        a /= 10;
    }
    return sum == tmp;
}
int main(){
    int sum = 0;
    for(int a = 2; a < max; a++){
        if(is_val(a))sum += a;
    }
    printf("%d\n", sum);
    return 0;
}
