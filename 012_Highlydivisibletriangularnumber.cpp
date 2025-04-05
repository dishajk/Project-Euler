// Highly divisible triangular number
// https://projecteuler.net/problem=12
// first triangle number to have over five hundred divisors
#include <iostream>
#include <stdio.h>
#include <math.h>       /* sqrt */

using namespace std;

int numdivisor(int n);

int main()
{
	int k;
	int a;
	do{
		k++;	
		a = k*(k+1)/2;
	}while(numdivisor(a)<500);
	cout << k*(k+1)/2 << "\n"; 
	return 0;
}
int numdivisor(int n){
	int num = 2;
	int divisor = 2;
	do{
		if(n%divisor==0){
			if(n==divisor*divisor){
				num+=1;
			}
			num+=2;
		}
		divisor++;
	}while(divisor <= sqrt(n));
	return num;
}
