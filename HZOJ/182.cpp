/*************************************************************************
	> File Name: 182.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月17日 星期一 15时22分35秒
 ************************************************************************/


#include<stdio.h>
long long f1(long long n) {
    if (n == 1) return 1;
    return 2 * f1(n - 1) + 1;
}
long long f2(long long n) {
    if (n == 1) return 1;
    return 2 * f2(n - 1) + n;
}
int main() {
    long long n;
    printf("%lld", n);
    printf("%lld %lld\n",f1(n), f2(n) );
    return 0;
}
