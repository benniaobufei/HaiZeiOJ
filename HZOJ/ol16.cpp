/*************************************************************************
	> File Name: ol16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月26日 星期三 09时43分58秒
 ************************************************************************/

#include<stdio.h>
#define max 2500
int main(){
    int a ;
    while(~scanf("%d", &a)){
        int arr[max + 5] = {1, 1, 0};
        int sum[max + 5] = {1, 1, 0};
        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= arr[0]; j++) arr[j] *= i;
            for(int k = 1; k <= arr[0]; k++){
                if(arr[k] < 10)continue;
                arr[k + 1] += arr[k] / 10;
                arr[k] %= 10;
                arr[0] += (k == arr[0]);
            }
        }
        for(int i = 1; i <= arr[0]; i++){
            if(arr[0] == 0)continue;
            for(int j = 1; j <= sum[0]; j++){
                sum[j] *= arr[i];
            }
            for(int k = 1; k <= sum[0]; k++){
                if(sum[k] < 10)continue;
                sum[k + 1] += sum[k] / 10;
                sum[k] %= 10;
                sum[0] += (k == sum[0]); 
            }
        }
        for(int i = sum[0];i >= 1; i--){
            printf("%d", sum[i]);
        }
        printf("\n");
    }
    return 0;
}
