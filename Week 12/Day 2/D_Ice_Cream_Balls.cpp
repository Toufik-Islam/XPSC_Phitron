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

__int128 k;
bool ok(__int128 n)
{
    __int128 ans;
    if (n & 1)
        ans = ((n - 1) / 2) * n;
    else
        ans = (n - 1) * (n / 2);
    // ll x = n / 2;
    return ans <= k;
}

void TC()
{
    ll n, m;
    cin >> n;
    k = n;

    __int128 l = 0;
    __int128 r = 1e10, sq = -1;
    while (l <= r)
    {
        __int128 mid = (l + r) / 2;
        if (ok(mid))
        {
            sq = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    __int128 ans;
    if (sq & 1)
        ans = ((sq - 1) / 2) * sq;
    else
        ans = (sq - 1) * (sq / 2);
    // cout << sq << nl;
    ll xx = (k - ans);
    cout << (ll)(sq + xx) << nl;
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