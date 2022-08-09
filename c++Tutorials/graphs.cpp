/*Here use the map to store the key and value int = nodes  and  list = associated pairs with it


*/

#include <bits/stdc++.h>
using namespace std;

class Graph
{

public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        // 0 for undirected graph
        // i.e  if 0 then it will make the path as 1 to 0 and 0 to 1 also

        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printGraph()
    {
        for (auto it : adj)
        {

            cout << it.first << "-->"; // This is for each loop it takes the datype automatic
            for (auto k : it.second)
            {
                cout << k << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{

    int n, m; // n = no of nodes, m = no of edges
    cout << "Enter the values of the n and  m :" << endl;
    cin >> n >> m;

    Graph g; // This is the object of the class

    for (int i = 0; i < m; i++)
    {
        int u, v; // edges from u to v
        cin >> u >> v;
        g.addEdge(u, v, 0);   // change here to make the undirected graph
    }

    g.printGraph();

    return 0;
}