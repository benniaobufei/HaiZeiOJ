/*************************************************************************
	> File Name: n.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月07日 星期一 15时42分35秒
 ************************************************************************/
 #include <stdio.h>
void func(int *a) {
    printf("a[0] = %d, a[1] = %d\n", a[0], a[1]);
    printf("a + 1 = %p, a + 2 = %p\n", a + 1, a + 2);
    printf("sizeof(a) = %lu\n", sizeof(a));
    return ;
}
void func2(int (*b)[3]) {
    printf("func2 : b = %p, b + 1 = %p\n", b, b + 1);
    return ;
}
int main() {
    int arr[10] = {1, 2, 0};
    int num[20][3];
    printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);
    printf("arr + 1 = %p, &arr[1] = %p, arr + 2 = %p\n", arr + 1, &arr[1], arr + 2);
    char *p = (char *)arr;
    printf("p = %p, p + 1 = %p\n", p, p + 1);
    func(arr);
    int n = 123;
    printf("sizeof(n) = %lu\n", sizeof(n));
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    func2(num);
    printf("num = %p, num + 1 = %p\n", num, num + 1);
    int **b = (int **)num;
    printf("b = %p, b + 1 = %p\n", b, b + 1);
    return 0;
}
