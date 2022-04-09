#include <iostream>

using namespace std;

int findDigitSum(int n) {
    int digitSum = 0;

    while(n > 0) {
        digitSum += n%10;
        n /= 10;
    }

    return digitSum;
}

int addDigits(int num) {
    int sum = findDigitSum(num);

    while (sum > 9) {
        sum = findDigitSum(sum);
    }

    return sum;
}

int main() {

    int n = 38;

    cout << addDigits(n) << endl;

    return -1;
}

/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/
