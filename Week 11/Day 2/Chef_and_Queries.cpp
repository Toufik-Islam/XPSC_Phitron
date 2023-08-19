/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6 + 5;
const long long M = (1LL << 32LL);
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

vector<bool> vis(M);
void TC()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a & 1)
        {
            if (vis[a / 2])
                continue;
            else
            {
                ans += (a / 2);
                vis[a / 2] = 1;
            }
        }
        else
        {
            if (vis[a / 2])
            {
                ans -= (a / 2);
                vis[a / 2] = 0;
            }
        }
        a = (a * b + c) % M;
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
