#include <iostream>
#include <vector>
#include <string>

using namespace std;

int numOfStrings(vector<string>& patterns, string word) {

    int count = 0; // to count patterns element in word

    for (string ele : patterns) {
        if (word.find(ele) != string::npos) {
            count++; // found ele in word
        }
    }

    return count;
}

int main() {
    vector<string> patterns = {"a","abc","bc","d"};
    string word = "abc";

    cout << numOfStrings(patterns, word) << endl;

    return -1;
}

/*
Given an array of strings patterns and a string word, 
return the number of strings in patterns that exist as a substring in word.

A substring is a contiguous sequence of characters within a string.
*/
