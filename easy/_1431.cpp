#include <iostream>
#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    // find highest candy
    int max = 0;
    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] > max) {
            // update max
            max = candies[i];
        }
    }    

    vector<bool> res;

    for (int i = 0; i < candies.size(); i++) {
        // true if candies pass or equal to  max with extraCandies
        if (candies[i] + extraCandies >= max) {
            res.push_back(1);
        }
        else {
            res.push_back(0);
        }
    }

    return res;
}

int main() {
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;

    vector<bool> res = kidsWithCandies(candies, extraCandies);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return -1;
}