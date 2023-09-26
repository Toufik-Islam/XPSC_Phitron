/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef __int128 lll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;

#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define forr(x, n) for (int i = x; i < n; ++i)
#define ff first
#define ss second
#define pb push_back
#define nl '\n'
#define sp << ' ' <<
#define print_ara(x, st, ed)      \
    for (int i = st; i < ed; i++) \
        cout << x[i] << " \n"[i == ed - 1];
#define print_map(t) \
    for (auto u : t) \
        cout << u.ff << " -> " << u.ss << nl;
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const int N = (int)1e6 + 5;
const ll inf = (ll)1e18 + 5;
const int md = (int)1e9 + 7;

void TC()
{
    int n;
    cin >> n;
    vll a(n + 1);
    forr(1, n + 1) cin >> a[i];
    a.pb(0);
    ll s = 0, ev = 0, ans = 0;
    for (int i = n; i > 0; --i)
    {
        if ((i & 1))
        {
            if (a[i] >= 0)
                s += a[i] + ev, ev = 0;
            else
                ans = max(ans, s + a[i] + ev);
        }
        if (!(i & 1))
        {
            if (a[i] > 0)
            {
                ans = max(ans, s + ev);
                ev += a[i];
            }
            else
                s += ev, ev = 0;
        }
        ans = max(ans, s);
        // cout << i sp ans << nl;
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