#include <iostream>

using namespace std;

int subtractProductAndSum(int n) {
    int sum = 0, product = 1;

    while (n > 0) {
        sum += n%10;
        product *= n%10;
        n /= 10;
    }

    return product - sum;
}

int main() {
    int n = 234;

    cout << subtractProductAndSum(n) << endl;

    return -1;
}

/*
Given an integer number n, 
return the difference between the product of its digits and the sum of its digits. 
*/
