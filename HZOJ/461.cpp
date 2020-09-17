/*************************************************************************
	> File Name: 461.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月16日 星期日 14时51分56秒
 ************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    struct student {
        int score;
        char name;
        char level[100];
    } stu[n];
    int s = 0, l = 0, g = 0;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        if (stu[i].name == 'C') {
            stu[i].level = getchar();
            getchar();
            s++;
        }
        else {
            cin >> stu[i].score;
            l += stu[i].score;
        }
    }
    int x;
    x = l / (n - s);
    cout << s <<" " << x << endl;
    return 0;
}
 
