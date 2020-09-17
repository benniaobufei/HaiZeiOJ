/*************************************************************************
	> File Name: 203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月16日 星期日 20时10分42秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 10

int arr[15][15] = {0};
int num[105];


int main(){
    int n, m ,k = 0;
    int sum = 0;
    cin >> n >> m;
    for(int i = 0; i< n;i++){
        for(int j = 0;j < m ;j++){
            cin >> arr[i][j];
            num[k++]= arr[i][j];
            sum += arr[i][j];
        }
    }
    for(int j = 0;j < m;j++){
        int ans = 0;
        for(int i = 0 ; i < n;i++){
            ans = max(ans, arr[i][j]);
        }
        cout << ans << endl;
    }
    sort(num,num + k);
    for(int i = k - 1;i > 0 ; i--){
        i != k - 1 && cout << " ";
        cout << num[i];
    }
    cout << endl;
    int avg = (int)(sum * 1.0 /(m * n)+ 0.5);
    cout << avg << endl;
    int cnt = 0;
    for(int i = k -1;i >= 0 ;i--){
        if(num[i] < avg)break;
        cnt++;
    }
    cout << cnt << endl;
    return 0 ;
}

