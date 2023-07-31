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

string s;
int n, c, q;
vector<ll> a;
vector<pll> all;

char query(ll k)
{
    if (k <= n - 1)
        return s[k];

    int id = upper_bound(all(a), k) - a.begin() - 1;
    ll dif = k - a[id];

    return query(all[id].first + dif);
}

void TC()
{
    a.clear();
    all.clear();

    cin >> n >> c >> q >> s;
    a.push_back(0);
    a.push_back(n);
    all.push_back({0, n - 1});

    for (int i = 0; i < c; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll len = r - l + 1;
        a.push_back(a.back() + len);
        all.push_back({l, r});
    }

    while (q--)
    {
        ll k;
        cin >> k;
        k--;
        cout << query(k) << nl;
    }
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
