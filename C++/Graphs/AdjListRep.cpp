#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& arr, int u, int v)
{
    arr[u].emplace_back(v);
    arr[v].emplace_back(u);
}

void printGraph(vector<vector<int>>& arr, int v)
{
    for (int i = 0; i < v; i++)
    {
        for (auto &el : arr[i])
        {
            cout << el << " ";
        }
        cout << endl;
    }
}

int main()
{
    int v = 4;
    vector<vector<int>> adj(v);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    printGraph(adj, v);

    return 0;
}