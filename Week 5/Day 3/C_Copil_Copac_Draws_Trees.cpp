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

vector<pii> Adj[N];
int visited[N], id[N];

void dfs(int x)
{
    for (auto i : Adj[x])
    {
        if (visited[i.ff] == 0)
        {
            visited[i.ff] = visited[x] + (i.ss <= id[x]);
            id[i.ff] = i.ss;
            dfs(i.ff);
        }
    }
}

void init(int n)
{
    for (int i = 0; i <= n; i++)
    {
        Adj[i].clear();
        visited[i] = 0;
        id[i] = 0;
    }
}
void TC()
{
    int n;
    cin >> n;
    init(n);
    vi A;
    for (int i = 1, x, y; i < n; i++)
    {
        cin >> x >> y;
        Adj[x].push_back({y, i});
        Adj[y].push_back({x, i});
    }
    visited[1] = 1;

    dfs(1);
    int mx = -1;
    for (int i = 1; i <= n; i++)
        mx = max(mx, visited[i]);
    cout << mx << nl;
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << t << ": ";
        TC();
    }
    return 0;
}
