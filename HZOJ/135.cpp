/*************************************************************************
	> File Name: 135.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年08月17日 星期一 14时11分03秒
 ************************************************************************/

#include<iostream>	
using namespace std;
int month[13]={0,31,28,31,30,31,30,
			  31,31,30,31,30,31} ;
int check(int y,int m,int d){
	if( m<0 || d<0) return 0;
	if((y % 4 == 0 && y % 100)|| y % 400 == 0)month[2] += 1;
    if (d > arr[y]){
        while(){

        }
    }
	return d <= month[m];
	}
int main(){
    int a;
    cin >> a;
    int arr[5];
    for(int i = 0 ;i < 3;i++){
        cin >> arr[i]
    }    
}
