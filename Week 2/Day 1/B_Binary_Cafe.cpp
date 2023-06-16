/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

ll fastPower(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a);

        a = (a * a);
        b = b >> 1;
    }
    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        if (n >= fastPower(2, i))
        {
            ans += fastPower(2, i);
            n -= fastPower(2, i);
        }
        else
        {
            ans += n;
            break;
        }
    }
    cout << ans + 1 << nl;
}

int main()
{
    Faster;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}