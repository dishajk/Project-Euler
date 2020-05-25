// 10001st prime
// https://projecteuler.net/problem=7
// the 10 001st prime number

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable 

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
	return 0;
}