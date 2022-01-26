#include <iostream>
#include <vector>

using namespace std;

vector<string> fizzBuzz(int n) {
    
    vector<string> res;
    
    for (int i = 1; i <= n; i++) {
        if (i %3 == 0 && i % 5 == 0) {
            res.push_back("FizzBuzz");
        }
        else if (i % 3 == 0) {
            res.push_back("Fizz");
        }
        else if (i % 5 == 0) {
            res.push_back("Buzz");
        }
        else {
            res.push_back(to_string(i));
        }
    }

    return res;
}

int main() {
    
    int n = 3;
    
    vector<string> res = fizzBuzz(n);
    
    for (int i = 0; i < res.size(); i++) {    
        cout<<res[i]<<endl;
    }

    return 0;
}

/*

Given an integer n, return a string array answer (1-indexed) where:

    answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
    answer[i] == "Fizz" if i is divisible by 3.
    answer[i] == "Buzz" if i is divisible by 5.
    answer[i] == i (as a string) if none of the above conditions are true.

*/
