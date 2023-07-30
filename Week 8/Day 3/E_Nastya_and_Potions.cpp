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

const ll inf = (ll)1e15;
int n, k;

vi Adj[N];
bool visited[N];
ll cost[N];

void DFS(int node)
{
    ll ans = 0;
    bool chk = false;

    visited[node] = true;

    for (auto child : Adj[node])
    {
        chk = true;
        if (!visited[child])
        {
            DFS(child);
        }
        ans += cost[child];
    }
    // cout << node sp chk sp ans << nl;
    cost[node] = chk ? min(ans, cost[node]) : cost[node];
}

void init()
{
    for (int i = 0; i <= n; i++)
    {
        Adj[i].clear();
        visited[i] = false;
        cost[i] = inf;
    }
}

void TC()
{
    cin >> n >> k;
    init();
    for (int i = 1; i <= n; i++)
        cin >> cost[i];

    while (k--)
    {
        int x;
        cin >> x;
        cost[x] = 0;
    }
    for (int i = 1, x, u; i <= n; i++)
    {
        cin >> x;
        while (x--)
        {
            cin >> u;
            Adj[i].pb(u);
        }
    }

    for (int i = 1; i <= n; i++)
        if (!visited[i])
            DFS(i);

    print_ara(cost, 1, n + 1);
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