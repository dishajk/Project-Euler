
// https://projecteuler.net/problem=14

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long int n = 1000000;
    long int maxLength = 0;
    long int maxstart = 0;

    for (long int i = n; i > 1; i--) {
        vector<long int> collatz;  
        long int current = i;

        while (current > 1) {
            collatz.push_back(current);
            if (current % 2 == 0)
                current = current / 2;
            else
                current = 3 * current + 1;
        }
        collatz.push_back(1);

        if (collatz.size() > maxLength){
            maxLength = collatz.size();
            maxstart = i;
            }
    }

    cout << "Maximum Collatz sequence length from 1 to " << n << " is: " << maxLength << endl;
    cout << "Maximum Collatz sequence length from 1 to " << n << " starts from: " << maxstart << endl;
    return 0;
}