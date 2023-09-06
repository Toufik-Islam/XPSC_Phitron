/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3 + 5;
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

int parent[N];
int Rank[N];

int Find(int x)
{
    if (parent[x] == x)
        return x;
    parent[x] = Find(parent[x]);
    return parent[x];
}

// make friend
void Union(int x, int y)
{
    int a = Find(x);
    int b = Find(y);

    if (a == b)
        return;
    if (Rank[a] < Rank[b])
        parent[a] = b, Rank[b] += 1;
    else if (Rank[a] > Rank[b])
        parent[b] = a, Rank[a] += 1;
    else
    {
        Rank[a] += 1;
        parent[a] = b;
    }
}

// check friend
bool Friend(int a, int b)
{
    return Find(a) == Find(b);
}

void TC()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n + 2; ++i)
        parent[i] = i;

    stack<pii> rem;
    set<int> par;
    for (int i = 0, u, v; i < n - 1; i++)
    {
        cin >> u >> v;
        if (!Friend(u, v))
            Union(u, v);
        else
            rem.push({u, v});
    }
    for (int i = 1; i <= n; ++i)
        par.insert(Find(i));

    cout << rem.size() << nl;
    // cout << par.size() << nl;
    auto x = par.begin();
    while (rem.size())
    {
        x++;
        cout << rem.top().ff sp rem.top().ss sp * par.begin() sp * x << nl;
        rem.pop();
    }
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
