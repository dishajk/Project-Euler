// g++ 001_Multiplesof3and5.cpp nsum.cpp -o a.out
// ./a.out

// Multiples of a and b
// https://projecteuler.net/problem=1
// sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <stdio.h>
#include "nsum.h"

using namespace std;
int main() {
    const int a = 3;
    const int b = 5;
    const int N = 1000 - 1;

    const int p = N / a;
    const int q = N / b;
    const int r = N / (a * b);

    cout << "Number of multiples of " << a << " below " << N+1 << " is " << p << endl;
    cout << "Number of multiples of " << b << " below " << N+1 << " is " << q << endl;
    cout << "Number of multiples of " << a*b << " below " << N+1 << " is " << r << endl;
    cout << "The sum of multples of " << a << " and " <<  b << " below " << N+1 << " is " << a * nsum(p) + b * nsum(q) - a * b * nsum(r) << endl;

    return 0;
}