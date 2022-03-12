#include <iostream>

using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int count = 0;
    for (int i = 0; i < jewels.length(); i++) {
        for (int j = 0; j < stones.length(); j++) {
            if (jewels.at(i) == stones.at(j)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    string jewels = "aA", stones = "aAAbbbb";
    cout << numJewelsInStones(jewels, stones)<<endl;
    return -1;
}

/*
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. 
You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/
