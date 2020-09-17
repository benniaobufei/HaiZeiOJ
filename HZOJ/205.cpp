/*************************************************************************
	> File Name: 205.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月16日 星期日 21时07分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
double arr[35][35];
int main(){
    int n ,m;
    cin >> n >> m ;
    for(int i = 0; i < n;i++ ){
        for(int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }
        for(int j = 0;j < m;j++){
            double sum = 0;
            for(int i = 0;i < n;i++){
                sum += arr[i][j];
            }
            printf("%.1lf\n",sum);

    }
    return 0;
    }
