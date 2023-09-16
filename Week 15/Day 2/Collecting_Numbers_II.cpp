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
    int n, m, l = 1;
    cin >> n >> m;
    vi id(n + 2), a(n + 2);
    id[n + 1] = n + 1;
    forr(1, n + 1)
    {
        int x;
        cin >> x;
        id[x] = i;
        a[i] = x;
    }
    int ans = 1;
    forr(1, n + 1)
    {
        if (l > id[i])
            ans++;
        l = id[i];
    }
    while (m--)
    {
        int x, y;
        cin >> x >> y;

        int r = a[x], s = a[y];
        swap(a[x], a[y]);

        if (id[r - 1] <= id[r] and id[r - 1] > y)
            ans++;
        if (id[r - 1] > id[r] and id[r - 1] <= y)
            ans--;
        if (id[r] <= id[r + 1] and y > id[r + 1])
            ans++;
        if (id[r] > id[r + 1] and y <= id[r + 1])
            ans--;

        id[r] = y;

        if (id[s - 1] <= id[s] and id[s - 1] > x)
            ans++;
        if (id[s - 1] > id[s] and id[s - 1] <= x)
            ans--;
        if (id[s] <= id[s + 1] and x > id[s + 1])
            ans++;
        if (id[s] > id[s + 1] and x <= id[s + 1])
            ans--;
        id[s] = x;

        cout << ans << endl;
    }
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
