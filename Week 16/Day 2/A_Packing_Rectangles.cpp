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
ll n, h, w;

bool ok(ll x)
{
    return (x / h) * (x / w) >= n;
}

int main()
{
    Faster;

    cin >> w >> h >> n;
    ll l = 0; // bad
    ll r = 1; // good
    while (!ok(r))
        r *= 2;

    while (l < r - 1)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
            r = mid;
        else
            l = mid;
    }
    cout << r << nl;
    return 0;
}
