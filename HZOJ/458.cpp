/*************************************************************************
	> File Name: 458.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月16日 星期日 16时06分00秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
typedef struct grade{
    string name;
    string xb;
    string year;
    string month;
}Grade;
bool cmp(Grade a ,Grade b){
    if(a.year == b.year && a.month > b.month){
        return false;
    } else if(a.year <  b.year) {
        return false;
    }else {
        return true;
    }
}
int main() {
    int n;
    cin >> n;
    Grade a[305];
    int i;
    for(i = 0;i <n;i++) {
        cin >> a[i].name >> a[i].xb >> a[i].year>>a[i].month ;
    }
        sort(a, a + n, cmp);
    for(i = 0; i < n;i++){
        cout << a[i].name <<" " << a[i].xb <<" " << a[i].year <<" " << a[i].month;
        cout << endl;
    }
    return 0;
    }
