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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    int n, k;
    cin >> n >> k;
    vi a(n);
    ordered_set<pii> os;
    mii mp;
    forr(0, n) cin >> a[i];

    for (int i = 0; i < k - 1; ++i)
        os.insert({a[i], ++mp[a[i]]});

    vi ans;
    for (int i = k - 1; i < n; ++i)
    {
        os.insert({a[i], ++mp[a[i]]});
        int med = os.find_by_order((k - 1) / 2)->ff;
        ans.pb(med);
        os.erase(os.find({a[i - k + 1], mp[a[i - k + 1]]--}));
    }
    print_ara(ans, 0, n - k + 1);
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
