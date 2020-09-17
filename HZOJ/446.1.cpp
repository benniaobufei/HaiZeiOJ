/*************************************************************************
	> File Name: 446.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月02日 星期三 10时17分29秒
 ************************************************************************/

#include<iostream>
using namespace std;
int a, b, c, d,num[10][10];
int main(){
    cin >> a; 
    for(int k = 1; k <=(a + 1) / 2; k++){
        for(int i = k; i <= a + 1 - k; i++){
            for(int j = k; j <= a + 1 - k; j++){
                num[i][j] = k;
            }

        }
    }
    for(int i=1;i<= a;i++){
	 	for(int j=1;j< a;j++)
	 	printf("%d ",num[i][j]);
	 	printf("%d\n",num[i][a]);
	 }
    return 0;
}
