// https://projecteuler.net/problem=16
// Tue  6 Dec 20:28:24 IST 2022
// Disha Kuzhively

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 1000;
    string number = "1";

    for (int i = 1; i <= n; i++) {
        int carry = 0;

        for (int j = number.size() - 1; j >= 0; j--) {
            int digit = number[j] - '0';
            int multiple = 2 * digit + carry;
            carry = multiple / 10;
            number[j] = (multiple % 10) + '0';
        }

        if (carry > 0) {
            number = (char)(carry + '0') + number;
        }
    }

    cout << "2^" << n << " = " << number << endl;
	int digitSum = 0;
	for (int i = 0; i < number.size(); i++){
		digitSum += number[i] - '0';
	}
	cout <<"Sum of the digits of the number " << "2^" << n << " = " <<  digitSum << endl;
    return 0;
}
