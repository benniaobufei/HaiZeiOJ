/*************************************************************************
	> File Name: test4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月16日 星期三 11时54分14秒
 ************************************************************************/
#include <iostream>
using namespace std;
#define max_n 20000
int prime[max_n + 5];
int list[max_n + 5];
void init() {
    for(int i = 2;i <= max_n; i++) {
        if(!prime[i]) list[++list[0]] = i;
        for(int j = 1;j <= list[0];j++) {
            if(list[j] * i > max_n) break;
            prime[list[j] * i] = 1;
            if(i % list[j] == 0) break;
        }
    }
}
int main()
{
    init();
    int n;
    cin >> n;
    int flag = 0;
    for(int i = 1;i <= list[0];i++) {
        for(int j = i;j <= list[0];j++) {
            if(prime[n - list[i] - list[j]] == 0) {
                cout << list[i] << " " << list[j] << " " << n - list[i] - list[j]; 
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }
    return 0;
}
