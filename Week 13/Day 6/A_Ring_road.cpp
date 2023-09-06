/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)100 + 5;
const int M = (int)1e9 + 5;
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

int n, m;
vector<int> Adj[N];
bool visited[N];
map<pii, int> mp;
int cost1, cost2;

void DFS(int node, int par)
{
    // visited[node] = true;
    for (auto child : Adj[node])
    {
        if (child == par)
            continue;
        if (!visited[child])
        {
            visited[child] = true;
            cost1 += mp[{node, child}];
            cost2 += mp[{child, node}];
            // cout << node sp child sp cost << nl;
            DFS(child, node);
        }
    }
}

void TC()
{
    cin >> n;
    for (int i = 0, u, v, w; i < n; ++i)
    {
        cin >> u >> v >> w;
        Adj[u].pb(v);
        Adj[v].pb(u);
        mp[{u, v}] = w;
        mp[{v, u}] = 0;
    }
    DFS(1, -1);
    cout << min(cost1, cost2) << nl;
}

int main()
{
    FastIO;

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
