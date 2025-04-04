// Largest prime factor
// https://projecteuler.net/problem=3
// largest prime factor of the number N = 600851475143
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	long int K = 600851475143;
	long int N = K;
	// Check if K is even, if K is even divide by 2 
	while (N%2 == 0){
		N = N/2;
	}
	// divide by every odd number after that which is less than the sqrt of the number
	for (int p = 3; p < sqrt(N); p=p+2)
	{
		while (N%p == 0){
			N = N/p;
		}
	}
	cout << "Largest prime factor of " << K << " is " << N << endl;
   return 0;
}