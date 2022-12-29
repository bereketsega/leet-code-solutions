#include <iostream>
#include <vector>

using namespace std;

int findCommon(vector<int> first, vector<int> second)
{
    // first number
    int firstNum = first[0];
    if (firstNum == second[0])
    {
        return firstNum;
    }
    else if (firstNum == second[1])
    {
        return firstNum;
    }
    // second number
    int secondNum = first[1];
    if (secondNum == second[0])
    {
        return secondNum;
    }
    else if (secondNum == second[1])
    {
        return secondNum;
    }
    return 0;
}

int findCenter(vector<vector<int>> &edges)
{
    vector<int> first = edges[0];
    vector<int> second = edges[1];
    return findCommon(first, second);
}
int main()
{
    vector<vector<int>> edges = {{1, 2}, {2, 3}, {4, 2}};
    int res = findCenter(edges);

    cout << res << endl;
}

// There is an undirected star graph consisting of n nodes labeled from 1 to n. A star graph is a graph where there is one center node
//  and exactly n - 1 edges that connect the center node with every other node.

// You are given a 2D integer array edges where each edges[i] = [ui, vi] indicates that there is an edge between the nodes ui and vi.
// Return the center of the given star graph.
