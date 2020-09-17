/*************************************************************************
	> File Name: ol13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月26日 星期三 10时31分20秒
 ************************************************************************/

#include<stdio.h>
#define max 55
char str[max + 5];
char sum[max + 5];
int main(){
    for(int i = 0; i < 100;i++){
        scanf("%s", str);
        calc(ans, str);
    }
    for(int i = ans[0]; i > ans[0] - 10;i--){
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
