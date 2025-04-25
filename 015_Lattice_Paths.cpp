// https://projecteuler.net/problem=15
// Disha Kuzhively

#include <iostream>
#include <string>

#include "nchoosek.h"

using namespace std;

int main()
{
    int k = 20;
    int n = 2*k;

    cout << "Starting in the top left corner of a " << k << "x" << k << " grid, and only being able to move to the right and down, there are exactly \n" << nchoosek (n, k) << "\nroutes to the bottom right corner." << endl;
    return 0;
}