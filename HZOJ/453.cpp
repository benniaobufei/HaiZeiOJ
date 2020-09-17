/*************************************************************************
	> File Name: 453.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月03日 星期四 11时10分46秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x, y, a = 0, num[10005] = {0},num2[10005],ans[30005];
    cin >> x >> y;
    for(int i = 0; i < a; i++){
        cin >> num[i];
    }
    for(int i = 0; i < x; i++){
        if(ans[num[i]] == 0){
            ans[num[i]]++;
            num2[a] = ans[num[i]];
            a++;
        }
    }
    sort(ans, ans + a);
    if(y <= a){
        cout << num[y];
    }else{
        cout << "NO RESULT";
    }
    cout << a;
    return 0;
}
