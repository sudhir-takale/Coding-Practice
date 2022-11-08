#include<iostream>
#include<list>

using namespace std;

int main() {

   int n, m,u,v;
   cin >> n >> m;

    list<int> adj[n +1];

for (int i = 0; i < m; i++)
{
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

for (int i = 0; i < m; i++)
{
    cout << i << "--->";
    list<int>::iterator it;
    for (it = adj[i].begin(); it != adj[i].end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

    return 0;
}