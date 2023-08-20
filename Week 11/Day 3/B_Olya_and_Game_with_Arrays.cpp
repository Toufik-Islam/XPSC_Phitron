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

void TC()
{
    ll n;
    cin >> n;
    vll mn1, mn2;
    ll minn = INT_MAX;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        ll a[x];
        for (int i = 0; i < x; ++i)
            cin >> a[i];
        sort(a, a + x);
        mn1.pb(a[0]);
        mn2.pb(a[1]);
        minn = min(minn, a[0]);
    }
    ll s = 0;
    for (auto i : mn2)
        s += i;
    ll ans = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        ll xx = s + minn - mn2[i];
        ans = max(ans, xx);
    }
    cout << ans << nl;
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