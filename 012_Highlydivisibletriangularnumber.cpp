// Highly divisible triangular number
// https://projecteuler.net/problem=12
// first triangle number to have over five hundred divisors
#include <iostream>
#include <stdio.h>
#include <math.h>       /* sqrt */

using namespace std;

int triangle(int n); 
int divisibility(int number, int divisor);
int numdivisor(int n);

int main()
{
	int k;
	int a;
	do{
		k++;	
		a = triangle(k);
	}while(numdivisor(a)<500);
	cout << triangle(k) << "\n"; 
	return 0;
}
int triangle(int n){
	return n*(n+1)/2;
}
int divisibility(int number, int divisor){
	if (number%divisor==0){
		return 1;	/*if divisible return 1*/
	}
	return 0;
}
int numdivisor(int n){
	int num = 2;
	int divisor = 2;
	do{
		if(divisibility(n,divisor)==1){
			if(n==divisor*divisor){
				num+=1;
			}
			num+=2;
		}
		divisor++;
	}while(divisor <= sqrt(n));
	return num;
}
