/*************************************************************************
	> File Name: oj43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月29日 星期六 11时03分12秒
 ************************************************************************/

#include<stdio.h>
#define max_n 1000 
#define max(a, b)({\
    __typeof(a) __a = a;\
    __typeof(b) __b = b;\
    __a > __b ? __a : __b;\
})
int x;
int keep[max_n + 5][max_n + 5];
int grid[max_n + 5][max_n + 5];
int get_val(int i , int j){
    if((i >= x || j >= x)) return 0;
    if(keep[i][j])return keep[i][j];
    int val1 = get_val(i + 1, j);
    int val2 = get_val(i + 1, j + 1);
    int ret =  max(val1,val2) + grid[i][j];
    keep[i][j] = ret;
    return ret;
}

int main(){
    while(~scanf("%d", &x)){
    for(int i = 0; i < x; i++){
        for(int j = 0; j <= i; j++){
            scanf("%d", &grid[i][j]);
        }    
    }
    printf("%d", get_val(0,0));
    }
    return 0;
}

