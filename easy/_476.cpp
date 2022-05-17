#include <iostream>
#include <cmath>

int findComplement(int num) {
    int ans = 0; 
    int p = 0;
    while (num >= 1) {
        // one's complement
        if (num % 2 == 0) {
            ans += std::pow(2, p);
        }
        num = num / 2;
        p++;
    }
    return ans;
}

int main() {

    int num = 5;
    std::cout << findComplement(num) << std::endl;

    return 0;
}

/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

    For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

Given an integer num, return its complement.
*/
