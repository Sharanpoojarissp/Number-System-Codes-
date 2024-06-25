#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool evenOdd(int number){


    if(number == 0){
        return true;
    }

    if( number % 2 == 0){
        return true;
    }

    else{
        return false;
    }
}

int main(){
    int number1 = -10;
    int number2 = 2; 

    if(evenOdd(number1)){
        cout<<" it is even number"<<endl;
    }
    else{
        cout<<" it is odd number"<<endl;

    }
    return 0;
}