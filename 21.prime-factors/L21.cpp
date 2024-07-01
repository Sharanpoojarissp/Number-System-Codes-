// #include<iostream>
// using namespace std;

// void primeFactors( int number ){
//   for(int divisor = 2 ; divisor*divisor<=number ; divisor++ ){
//         while(number % divisor == 0){
//             number = number / divisor ;
//             cout << divisor <<" ";
//         }
//   }
//         if(number!= 1)
//         cout<< number ;
// }

// int main(){
    
//     cout<<"Enter the number : "<<endl;
//     int number = 1440 ;

//     primeFactors(number);

//     return 0;
// }

#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int number = 36 ;
    int count = 0;
    int sum= 0; 
    for(int div = 2 ; div*div <= number ; div++ ){
        if(number % div == 0){
            sum = sum + div ;
            count = count + 1 ;
        
        if(number != number/div ){
            count++;
            sum = sum + div;
        }
    }
}

cout<< count << "and" << sum ;
    return 0;
}