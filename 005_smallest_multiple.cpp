// g++ 005_smallest_multiple.cpp gcd.cpp -o a.out

// smallest multiple
// https://projecteuler.net/problem=5
// smallest positive number that is evenly divisible by numbers from 1 to 20

#include <iostream>
#include <stdio.h>
#include <cmath>

#include "gcd.h"

using namespace std;
int main()
{
	int j = 1;
	int k = 20;
	long int product = k;
	for(int i = k-1; i >= j; i-- ){
		product = product*i/gcd(product,i);
	}
	cout << "The smallest positive number that is evenly divisible by all of the numbers from " << j << " to " << k << " is " << product << "\n";
	return 0;
}