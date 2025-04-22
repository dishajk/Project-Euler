// https://projecteuler.net/problem=20
// Tue  6 Dec 20:28:24 IST 2022
// Disha Kuzhively

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 100;
    string number = to_string(n);

    for (int i = n-1; i > 1; i--) {
        int carry = 0;

        for (int j = number.size() - 1; j >= 0; j--) {
            int digit = number[j] - '0';
            int multiple = i * digit + carry;
            carry = multiple / 10;
            number[j] = (multiple % 10) + '0';
        }

        if (carry > 0) {
            number = (char)(carry + '0') + number;
        }
    }

    cout <<  n << "! = " << number << endl;
	int digitSum = 0;
	for (int i = 0; i < number.size(); i++){
		digitSum += number[i] - '0';
	}
	cout <<"Sum of the digits of " << n << "! = " <<  digitSum << endl;
    return 0;
}
