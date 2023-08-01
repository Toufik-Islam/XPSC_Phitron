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
    int n, mx = -100, mx_idx, mn = 100, mn_idx;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
            mx = a[i], mx_idx = i;

        if (a[i] < mn)
            mn = a[i], mn_idx = i;
    }
    vector<pii> ans;
    vi b = a;
    if (mx > 0)
    {
        for (int i = 1; i < n; i++)
        {
            while (a[i] < a[i - 1])
            {
                a[i] += mx;
                ans.pb({i, mx_idx});
                if (a[i] > mx)
                    mx = a[i], mx_idx = i;
            }
        }
    }
    if (ans.size() > 50 or mx < 1)
    {
        ans.clear();
        for (int i = n - 2; i >= 0; i--)
        {
            while (b[i] > b[i + 1])
            {
                b[i] += mn;
                ans.pb({i, mn_idx});
                if (b[i] < mn)
                    mn = b[i], mn_idx = i;
            }
        }
    }
    cout << ans.size() << nl;
    for (auto &i : ans)
        cout << i.ff + 1 sp i.ss + 1 << nl;
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