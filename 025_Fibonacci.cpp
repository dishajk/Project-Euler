// https://projecteuler.net/problem=25
// Disha Kuzhively

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n = 1000;
    int f1 = 1;
    int f2 = 1;
    
    string fibonaccinm1 = to_string(f2); 
    string fibonaccinm2 = to_string(f1); 
    
    int fibonacciIndex = 2;
    string fibonacci="2"; 
    do{
        int difference = fibonaccinm1.size()-fibonaccinm2.size();
        if(difference > 0){
            fibonaccinm2 = string(difference, '0') + fibonaccinm2;
        }
        int j=0;
        int carry = 0;
        for(int i = fibonaccinm1.size()-1; i >= 0; i --){
            f1 = fibonaccinm1[i] - '0';
            f2 = fibonaccinm2[i] - '0';
            int f = f1+f2+carry;
            carry = f/10;
            fibonacci[j] = (f%10)+'0';
            j++;
        }
        reverse(fibonacci.begin(), fibonacci.end());
        if(carry > 0){
            fibonacci = to_string(carry) + fibonacci;
        }
        fibonacciIndex++;
        fibonaccinm2 = fibonaccinm1;
        fibonaccinm1 = fibonacci;
        // cout << fibonacci << endl;
    }
    while(fibonacci.size()<n);
    cout << fibonacciIndex << endl;

    return 0;
}