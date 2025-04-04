#include "gcd.h"

int gcd(int a, int b) {
    if (a < b) {
        return gcd(b, a);
    } else if (a == b) {
        return a;
    } else {
        if (b == 0) {
            return a;
        } else if (b == 1) {
            return 1;
        } else {
            return gcd(a % b, b);
        }
    }
}