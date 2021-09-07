// Sum square difference
// https://projecteuler.net/problem=6
// difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>
#include <stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int N;
	N = 100;
	cout<< pow(N*(N+1)/2,2) -N*(N+1)*(2*N+1)/6<< "\n";
	return 0;
}
