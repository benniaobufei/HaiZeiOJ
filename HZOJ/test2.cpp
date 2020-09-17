/*************************************************************************
	> File Name: test2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月16日 星期三 11时38分18秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define max_n 1000000
int f[max_n +5];
int ans = 0;
void init() {
    for(int i = 1;i <= max_n;i++) {
        for(int j = i;j <= max_n;j += i) {
            f[j] += i;
            if(ans < f[j]) {
                ans = f[j];
            }
        }
    }
}
int main()
{
    init();
    cout << ans << endl;
    return 0;
}
