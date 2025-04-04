// Largest palindrome product
// https://projecteuler.net/problem=4
// largest palindrome made from the product of two n-digit numbers
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int palindrome(int p);
int main()
{	
	int pnum = 0;
	int m, n;

	for (int i = 999; i >= 100; i--){
		for (int j = i; j >= 100; j--){
			int product = i * j;
			if (product <= pnum){
				break;
			}
			if (palindrome(product)==1){
				pnum = product;
				m = i;
				n = j;
			}
		}
	}

	cout << "Largest palindrome product: " << n << " x " << n << " = " << pnum << endl;

	return 0;
}
// Function to check whether a 6 digit number is a palindrome
int palindrome(int p){
	int x[6];
	for (int i = 0; i < 4; i++)
	{
		x[i] = p%10;
		p = (p - x[i])/10;
	}
	if (x[2]==x[3])
	{
		x[4] = p%10;
		p = (p-x[4])/10;
		if (x[4]==x[1] && p == x[0])
		{
			return 1;
		}
		return 0;
	}
	return 0;
}