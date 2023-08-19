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

ll dp[252];
void TC()
{
    ll n;
    cin >> n;
    ll ans = dp[n - 1];
    ll t = n;
    while (1)
    {
        t--;
        ll s = dp[t - 1];
        ll m = 0;
        for (ll i = t, j = n; i <= n; i++, j--)
        {
            s += i * j;
            m = max(m, i * j);
        }
        s -= m;
        if (s < ans)
        {
            break;
        }
        ans = s;
    }
    cout << ans << nl;
}
int main()
{
    FastIO;

    for (ll i = 1; i < 252; ++i)
        dp[i] = i * i;

    for (ll i = 1; i < 252; ++i)
        dp[i] += dp[i - 1];

    // print_ara(dp, 0, 251);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}