#include <iostream>
#include <vector>

using namespace std;
int main()
{

    int n, m, u, v;
    cin >> n >> m;

    vector<int> adj[n + 1];
    cout << "Enter the values of m and n and edges of the graph:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << i << "--->";
    //     list<int>::iterator it;
    //     for (it = adj[i].begin(); it != adj[i].end(); ++it)
    //     {
    //         cout << *it << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}