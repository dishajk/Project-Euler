// smallest multiple
// https://projecteuler.net/problem=5
// smallest positive number that is evenly divisible by numbers from 1 to 20

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
int gcd (int a, int b);
int main()
{
	int k = 20;
	long int product = k;
	for(int i = k-1; i > 1; i-- ){
		product = product*i/gcd(product,i);
	}
	cout << product << "\n";
	return 0;
}
int gcd (int a, int b){
	if (a < b){
		return gcd(b, a);
	}else if(a == b){
		return a;
	}else{
		if(b==0){
			return a;
		}else if (b==1){
			return 1;
		}else{
			return gcd(a%b, b);
		}
	}
}