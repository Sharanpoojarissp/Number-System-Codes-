#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
 int number = 10 ;
 int a = 10 ;
 int r = 2 ;
 int current ; 
 for(int i=0 ; i< number  ; i++ ){
    current = a * pow(r,i);
    cout << current << " ";
 }
    return 0;
}