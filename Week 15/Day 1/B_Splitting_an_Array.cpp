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

int n, k;
vi a;
ll mx;
bool ok(ll x)
{
    int part = 1;
    ll sum = 0;
    mx = 0;
    for (auto v : a)
    {
        if (x < v)
        {
            part = 1e9;
            break;
        }

        if (sum + v <= x)
            sum += v;
        else
            part++, sum = v;
        mx = max(mx, sum);
        if (part > k)
            break;
    }
    // cout << part sp x sp mx << nl;
    return k >= part;
}

void TC()
{
    cin >> n >> k;
    a.resize(n);
    forr(0, n) cin >> a[i];
    ll l = 0;
    ll r = 1e15;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mx;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << nl;
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
