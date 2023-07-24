/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5 + 5;
const int M = (1 << 21);
const int md = (int)1e9 + 7;

#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second
#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define pb push_back
#define nl '\n'
#define sp << ' ' <<
#define print_ara(x, st, ed)      \
    for (int i = st; i < ed; i++) \
        cout << x[i] << " \n"[i == ed - 1];
#define print_map(t) \
    for (auto u : t) \
        cout << u.ff sp u.ss << nl;
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int n;
vector<pii> Adj[N];
vector<pii> pairs(M);
int x_or[N];
bool visited[N];

void DFS(int node)
{
    visited[node] = true;

    for (auto child : Adj[node])
    {
        if (!visited[child.ff])
        {
            x_or[child.ff] = child.ss ^ x_or[node];
            DFS(child.ff);
        }
    }
}

void init()
{
    for (int i = 0; i < M; i++)
        pairs[i] = {0, 0};
    for (int i = 0; i <= n; i++)
    {
        visited[i] = false;
        Adj[i].clear();
        x_or[i] = 0;
    }
}

void TC()
{
    cin >> n;
    init();
    for (int i = 0, x, y, z; i < n - 1; i++)
    {
        cin >> x >> y >> z;
        Adj[x].pb({y, z});
        Adj[y].pb({x, z});
    }
    x_or[1] = 0;
    DFS(1);
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int val = x_or[i] ^ x_or[j];
            if (pairs[val].ff != 0)
            {
                cout << pairs[val].ff sp pairs[val].ss sp i sp j << nl;
                return;
            }
            pairs[val] = {i, j};
        }
    }
    cout << "-1\n";
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
