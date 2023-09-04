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
    int n;
    cin >> n;
    vll a, b;
    a.pb(0);
    b.pb(0);
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        a.pb(x);
    }
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        b.pb(x);
    }

    // using two wires
    ll ans = abs(a[1] - b[1]) + abs(a[n] - b[n]);
    ans = min(ans, abs(a[1] - b[n]) + abs(a[n] - b[1]));

    // using three wires
    ll x1 = INT_MAX, y1 = INT_MAX, x2 = INT_MAX, y2 = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        x1 = min(x1, abs(a[1] - b[i]));
    }
    for (int i = 1; i <= n; i++)
    {
        y1 = min(y1, abs(b[1] - a[i]));
    }
    ans = min(ans, x1 + y1 + abs(a[n] - b[n]));
    for (int i = n; i >= 1; i--)
    {
        x2 = min(x2, abs(a[n] - b[i]));
    }
    for (int i = n; i >= 1; i--)
    {
        y2 = min(y2, abs(b[n] - a[i]));
    }
    ans = min(ans, x2 + y2 + abs(a[1] - b[1]));
    ans = min(ans, x1 + y2 + abs(a[n] - b[1]));
    ans = min(ans, y1 + x2 + abs(a[1] - b[n]));
    ans = min(ans, x1 + y1 + x2 + y2);
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
