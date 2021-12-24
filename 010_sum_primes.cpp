// sum of primes
// https://projecteuler.net/problem=10
// sum of two million prime

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

const int n = 2000000;
int prime[n/2]; 

int divisibility(int, int);
int main()
{
	long int sum = 0;
	prime[0] = 2;
	int dummy;
	int count = 0;
	for (int i = 0; prime[i] <= n; i++)
	{
		dummy = prime[i];
		do
		{
			dummy = dummy + 1;
		} while (divisibility(dummy,i)==1);
		prime[i+1]=dummy;
		sum += prime[i];
		count += 1;
	}
	cout << sum << "\n";
	// cout << count << "\n";
	return 0;
}
int divisibility(int n, int k){
	for (int i = 0; prime[i] <= sqrt(n); i++)
	{
		if (n%prime[i]==0) 
		{
			return 1; /*if divisible return 1*/
		}
	}
	return 0;
}
