#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {
    
    int l = 0;
    int h = s.size()-1;

    while (l < h) {
        //swap
        char tmp = s[l];
        s[l++] = s[h];
        s[h--] = tmp;  
    }

}

int main() {

    vector<char> s = {'h','e','l','l','o'};

    reverseString(s);

    for (char c : s) {
        cout << c << " ";
    }

    cout << endl;

    return -1;
}

/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
*/
