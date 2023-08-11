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

int n;
ll m;
vi A;

bool good(ll x)
{
    ll s = 0;
    for (int i = 0; i < n; ++i)
    {
        if (x < A[i])
            s += A[i] - x;
        if (s >= m)
            return true;
    }
    return false;
}

int main()
{
    FastIO;

    cin >> n >> m;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.pb(x);
    }
    ll l = 0;    // good
    ll r = 1e15; // bad
    while (l < r - 1)
    {
        ll mid = (l + r) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l << nl;
    return 0;
}
