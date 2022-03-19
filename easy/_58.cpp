#include <iostream>

using namespace std;

int lengthOfLastWord(string s) {
    int idx = s.length()-1;
    char space = s.at(idx);
    
    int ansL = 0;
    // find the last letter of the last word
    while (space == ' ') {
        idx--;
        space = s.at(idx);
        
    }
    
    // loop the word from last to first and count char
    while (space != ' ' && idx >= 0) {
        
        space = s.at(idx);
            if (space == ' ') {
                break;
            }
        idx--;
        ansL++;
    }
    
    return ansL;
}

int main() {
    string s = "Hello World";

    cout << lengthOfLastWord(s) << endl;

    return -1;
}

/*
Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
*/
