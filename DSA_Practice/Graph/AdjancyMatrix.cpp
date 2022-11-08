
// we have to initialize the matrix values with zero.

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the values of m and n " << endl;
    int n, m;
    cin >> n >> m;
    int adj[n + 1][n + 1];
    for (int i = 0; i < n + 1; i++)
    {

        for (int j = 0; j < n+ 1; j++)
        {
            adj[i][j] = 0;
        }
    }
    cout << "Enter the edges of graph:" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
         
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}