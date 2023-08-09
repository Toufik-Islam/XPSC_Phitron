/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6 + 5;
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

int n, m, ok;
vector<int> Adj[N];
bool cat[N];
bool visited[N];

void DFS(int node, int streak)
{
    visited[node] = true;

    if (cat[node])
        streak++;
    else
        streak = 0;

    if (streak > m)
        return;

    for (auto child : Adj[node])
    {
        if (!visited[child])
            DFS(child, streak);
    }

    if (Adj[node].size() == 1 and node != 1)
        ok++;
}

void TC()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> cat[i];

    for (int i = 1, y, x; i < n; i++)
    {
        cin >> x >> y;
        Adj[x].pb(y);
        Adj[y].pb(x);
    }
    DFS(1, 0);
    cout << ok << nl;
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
