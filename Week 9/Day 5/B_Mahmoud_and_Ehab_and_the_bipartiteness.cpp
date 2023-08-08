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

vector<int> Adj[N];
int n, m;
vi color;

bool coloring(int src)
{

    int col;
    if (color[src] == 1)
        col = 2;
    else
        col = 1;

    for (auto node : Adj[src])
    {
        if (color[node] == 0)
        {
            color[node] = col;
            bool ok = coloring(node);
            if (!ok)
                return false;
        }
        else
        {
            if (color[src] == color[node])
                return false;
        }
    }
    return true;
}

void TC()
{
    cin >> n;
    color.resize(n + 1);
    for (int i = 0, y, x; i < n - 1; i++)
    {
        cin >> x >> y;
        Adj[x].pb(y);
        Adj[y].pb(x);
    }
    coloring(1);
    ll c1 = count(all(color), 1);
    ll c2 = count(all(color), 2);
    cout << c1 * c2 - (n - 1) << nl;
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
