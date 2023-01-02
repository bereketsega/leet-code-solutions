#include <iostream>
#include <vector>

using namespace std;
int equalPairs(vector<vector<int>> &grid)
{
    int count = 0;
    bool isEqual = true;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            for (int k = 0; k < grid[i].size(); k++)
            {
                int colEle = grid[k][j];
                if (grid[i][k] != colEle)
                {
                    isEqual = false;
                }
            }
            if (isEqual)
            {
                count++;
            }
            else
            {
                isEqual = true;
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> grid = {{3, 2, 1}, {1, 7, 6}, {2, 7, 7}};
    cout << equalPairs(grid) << endl;
    return 0;
}

// Given a 0-indexed n x n integer matrix grid,
// return the number of pairs (ri, cj) such that row ri and column cj are equal.

// A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).
