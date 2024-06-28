#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
int number = 1932;
int min = INT_MAX;
int max = INT_MIN;

while(number != 0 ){
    int digit =   number%10 ;
    if(digit < min ){
        min = digit;
    }
    else if(digit > max){
        max = digit;
    }
     number /= 10; 
}

cout << max << " " << min ;

    return 0;
}