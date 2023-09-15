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

int n, c;
vll A;

bool ok(ll x)
{
    int cnt = 1, i = 0;
    while (i < n)
    {
        auto it = lower_bound(all(A), A[i] + x);
        if (it == A.end() or cnt >= c)
            break;
        // cout << *it << nl;
        i = it - A.begin();
        cnt++;
    }
    return cnt >= c;
}

void TC()
{
    A.clear();
    cin >> n >> c;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.pb(x);
    }
    sort(all(A));
    ll l = 0;
    ll r = 1e15;
    while (l < r - 1)
    {
        ll mid = (l + r) / 2;
        if (!ok(mid))
            r = mid;
        else
            l = mid;
    }
    cout << l << nl;
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
