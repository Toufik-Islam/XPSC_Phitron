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
    vector<pair<pii, int>> a;
    forr(0, n)
    {
        int x, y;
        cin >> x >> y;
        a.pb({{x, y}, i});
    }
    sort(all(a));
    vi ans(n);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    int lst = 0, mx = 0;
    forr(0, n)
    {
        if (pq.empty() or a[i].ff.ff <= pq.top().ff)
        {
            lst++;
            ans[a[i].ss] = lst;
            pii p = {a[i].ff.ss, lst};
            pq.push(p);
        }
        else
        {
            ans[a[i].ss] = pq.top().ss;
            pii p = {a[i].ff.ss, pq.top().ss};
            pq.push(p);
            pq.pop();
        }
        mx = max(mx, lst);
    }
    cout << mx << nl;
    print_ara(ans, 0, n);
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
