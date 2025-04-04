// 10001st prime
// https://projecteuler.net/problem=7
// the n=10001st prime number

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
const int n =10001;
const int limit = n*log(n* log(n)); 

vector<bool> isprime(limit,true);
vector<int> primes;

isprime[0] = false;
isprime[1] = false;

for (int i = 2; i < limit; i ++){
	if(isprime[i]){
		primes.push_back(i);
		if(primes.size() == n){
			cout << "The " << n <<"th prime number is "<<i<<endl;
			break;
		}
		for (int j = 2*i; j < limit; j+=i){
			isprime[j]=false;
		}
	}
}
cout << n <<"\t" << limit << endl;
	return 0;
}