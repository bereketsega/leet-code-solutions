#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<int>> groupThePeople(vector<int> &groupSizes)
{
    map<int, vector<int>> m;
    vector<vector<int>> ans;

    for (int i = 0; i < groupSizes.size(); i++)
    {
        // check if key exist
        if (m.find(groupSizes.at(i)) == m.end())
        {
            // not found
            vector<int> newList = {i};
            m.insert({groupSizes.at(i), newList});
            if (m.at(groupSizes.at(i)).size() == groupSizes.at(i))
            {
                ans.push_back(m.at(groupSizes.at(i)));
            }
        }
        else
        {
            // found, then check size
            if (m.at(groupSizes.at(i)).size() < groupSizes.at(i))
            {
                // add
                vector<int> existingList = m.at(groupSizes.at(i));
                existingList.push_back(i);
                m[groupSizes.at(i)] = existingList;
                if (m.at(groupSizes.at(i)).size() == groupSizes.at(i))
                {
                    ans.push_back(m.at(groupSizes.at(i)));
                }
            }
            else
            {
                // update
                vector<int> newList = {i};
                m[groupSizes.at(i)] = newList;
                if (m.at(groupSizes.at(i)).size() == groupSizes.at(i))
                {
                    ans.push_back(m.at(groupSizes.at(i)));
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> groupSizes = {3, 3, 3, 3, 3, 1, 3};
    vector<vector<int>> res = groupThePeople(groupSizes);
    cout << "[" << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << " [";
        for (int j = 0; j < res.at(i).size(); j++)
        {
            cout << res.at(i).at(j) << " ";
        }
        cout << "]," << endl;
    }
    cout << "]" << endl;

    return 0;
}

// There are n people that are split into some unknown number of groups. Each person is labeled with a unique ID from 0 to n - 1.

// You are given an integer array groupSizes, where groupSizes[i] is the size of the group that person i is in. For example, if groupSizes[1] = 3,
// then person 1 must be in a group of size 3.

// Return a list of groups such that each person i is in a group of size groupSizes[i].

// Each person should appear in exactly one group, and every person must be in a group. If there are multiple answers, return any of them.
// It is guaranteed that there will be at least one valid solution for the given input.
