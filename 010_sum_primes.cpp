// sum of primes
// https://projecteuler.net/problem=10
// sum of two million prime

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;

const long int n = 2000000;
int main()
{
	vector<bool> isprime(n,true);

	isprime[0] = false;
	isprime[1] = false;

	long int sum = 0;

	for (int i = 2; i < n; i ++){
		if(isprime[i]){
			sum+=i;
			for (int j = 2*i; j < n; j+=i){
			isprime[j]=false;
			}
		}
	}
	cout<< "The sum of all the primes below " << n << " is " << sum << "\n";
	return 0;
}