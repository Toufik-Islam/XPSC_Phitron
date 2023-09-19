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

vi Adj[N];

void TC()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        Adj[i].clear();

    vi A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        Adj[A[i]].pb(x);
    }
    vll ans(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int sz = Adj[i].size();
        if (!sz)
            continue;
        sort(rall(Adj[i]));
        vll pref(sz + 1);
        for (int j = 1; j <= sz; ++j)
            pref[j] = pref[j - 1] + Adj[i][j - 1];
        // print_ara(pref, 0, sz + 1);

        for (int j = 1; j <= sz; ++j)
            ans[j] += pref[sz / j * j];
    }
    print_ara(ans, 1, n+1);
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