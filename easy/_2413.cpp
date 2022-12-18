#include <iostream>


int smallestEvenMultiple(int n) {
    int oldN = n;
    while (n%2!=0 || n%oldN!=0) {
        n+=oldN;
    } 
    return n;
}


int main() {
    int res = smallestEvenMultiple(5);
    std::cout << res << std::endl;
    return 0;
}

// Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n. 

// Example 1:

//  Input: n = 5
//  Output: 10
//  Explanation: The smallest multiple of both 5 and 2 is 10.
