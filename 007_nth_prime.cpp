// 10001st prime
// https://projecteuler.net/problem=7
// the n=10001st prime number

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

const int n =10001;
int prime[n]; 

int divisibility(int, int);
int main()
{
	prime[0] = 2;
	int dummy;
	for (int i = 0; i < n; i++)
	{
		dummy = prime[i];
		do
		{
			dummy = dummy + 1;
		} while (divisibility(dummy,i)==1);
		prime[i+1]=dummy;
	}
	cout << prime[n-1] << "\n";
	return 0;
}
int divisibility(int n, int k){
	for (int i = 0; i < k+1; i++)
	{
		if (n%prime[i]==0) 
		{
			return 1; /*if divisible return 1*/
		}
	}
	return 0;
}