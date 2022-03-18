#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int temp = 0;
    int wealth = 0;

    for (int i = 0; i < accounts.size(); i++) {
        for (int j = 0; j < accounts[i].size(); j++) {
            temp +=accounts[i][j];
        }
        if (temp > wealth ) {
            wealth = temp;
        }
        temp = 0;
    }
    return wealth;
}

int main() {
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};

    cout << maximumWealth(accounts)<<endl;

    return -1;
}

/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. 
The richest customer is the customer that has the maximum wealth.
*/
