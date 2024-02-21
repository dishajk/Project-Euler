// Large sum
// https://projecteuler.net/problem=13
// first ten digits of the sum of the following one-hundred 50-digit numbers

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	int p = 15;
	int n = 100;
	int sum[p];
	string data[n];
	ifstream file;
	file.open("numbers.dat",ios::in);

	if (!file) {
        cerr << "Error opening file." << endl;
        return 1;
    }
	for (int k = 0; k < n; k++) {
        file >> data[k];
        // cout << data[k] << "\t";
		for (int i = 0; i < p; i++){
			sum[i] += data[k][i]-'0';
		}
    }
	long int answer = 0;
	for (int i = p-1; i >= 0 ; i --){
		answer += sum[i]*pow(10,p-1-i);
		cout << answer << "\t";
		cout << sum[i]*pow(10,p-1-i) << "\n";
	}
    file.close();

    return 0;
}
