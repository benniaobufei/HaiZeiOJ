/*************************************************************************
	> File Name: 201.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月16日 星期日 17时41分45秒
 ************************************************************************/
#include<iostream>
using namespace std;
int a[1005] = {0};
int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0;i < n;i++) {
        int temp;
        cin >> temp;
        if(a[temp]==0) {
            cnt++;
        }
        a[temp]++;
    }
    cout << cnt << endl; 
    int flag = 0;
    for(int i = 0;i < 1005;i++) {
        if(a[i]!= 0) {
            flag != 0 && cout << " ";
            cout << i;
            flag = 1;
        }
    }
    return 0;
}
