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

ll dis(pll a, pll b)
{
    return _abs64(a.ff - b.ff) + _abs64(a.ss - b.ss);
}

void TC()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pll> A;
    pll st, ed;
    for (int i = 0, x, y; i < n; i++)
    {
        cin >> x >> y;
        if (i < k)
            A.pb({x, y});
        if (a == i + 1)
            st = {x, y};
        if (b == i + 1)
            ed = {x, y};
    }
    if (k == 0)
    {
        cout << dis(st, ed) << nl;
        return;
    }
    ll d1 = INT64_MAX, d2 = INT64_MAX, d3 = dis(st, ed);
    for (auto i : A)
    {
        d1 = min(d1, dis(i, st));
        d2 = min(d2, dis(i, ed));
        // cout << d1 sp d2 << nl;
        // cout << d1 + d2 << nl;
    }
    // cout << INT64_MAX << nl;
    // cout << d1 + d2 sp d3 << nl;
    cout << min(d3, d1 + d2) << nl;
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