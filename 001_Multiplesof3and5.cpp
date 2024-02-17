// Multiples of a and b
// https://projecteuler.net/problem=1
// sum of all the multiples of 3 or 5 below 1000.
#include <iostream>
#include <stdio.h>

using namespace std;
int nsum(int n);
int main() {
    const int a = 3;
    const int b = 5;
    const int N = 1000 - 1;

    const int p = N / a;
    const int q = N / b;
    const int r = N / (a * b);

    cout << p << "\t" << q << "\t" << r << endl;
    cout << a * nsum(p) + b * nsum(q) - a * b * nsum(r) << endl;

    return 0;
}
int nsum(int n) {
    return n * (n + 1) / 2;
}