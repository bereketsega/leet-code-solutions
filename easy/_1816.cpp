#include <iostream>
#include <string>

using namespace std;

string truncateSentence(string s, int k) {
    
    int end = 0; // to count last index of substring
    
    for (int i = 0; i < s.length(); i++) {
        // count spaces
        if (s[i] == ' ') {
            k--;
        }
        // found all words
        if (k == 0) {
            break;
        }
        // count
        end++;
    }

    return s.substr(0, end);
}

int main() {

    string s = "Hello how are you Contestant"; int k = 4;

    cout << truncateSentence(s, k) << endl;

    return -1;
}

/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. 
Each of the words consists of only uppercase and lowercase English letters (no punctuation).

    For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.

You are given a sentence s​​​​​​ and an integer k​​​​​​. 
You want to truncate s​​​​​​ such that it contains only the first k​​​​​​ words. Return s​​​​​​ after truncating it.
*/
