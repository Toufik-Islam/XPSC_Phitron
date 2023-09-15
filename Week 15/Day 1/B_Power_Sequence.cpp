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

ll add(ll a, ll b)
{
    if (a + b > inf)
        return inf;
    return a + b;
}

ll mul(lll a, lll b)
{
    if (a * b > inf)
        return inf;
    return a * b;
}

void TC()
{
    ll n, ans = inf;
    cin >> n;
    ll sum = 0;
    vll a(n);
    forr(0, n) cin >> a[i], sum += a[i];
    sort(all(a));
    int go = 0;
    while (++go)
    {
        ll tmp = 0, p = 1;
        forr(0, n)
        {
            tmp = add(tmp, _abs64(a[i] - p));
            p = mul(p, go);
        }
        if (p == inf or ans < tmp)
            break;
        ans = min(ans, tmp);
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
