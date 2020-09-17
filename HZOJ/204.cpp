/*************************************************************************
	> File Name: 204.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月16日 星期日 20时40分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
int arr[35][35],num[1000];
int main(){
    int n ;
    cin >> n ;
    for(int i = 0; i < n;i++ ){
        for(int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
        for(int i = 0, j = 1;i < n;i++, j++){
            cout << arr[i][i] << endl;

    }
    return 0;
    }
