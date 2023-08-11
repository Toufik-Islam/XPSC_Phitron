/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

ll n, s;

bool good(ll x)
{
    int sum = 0;
    ll t = x;
    while (t)
        sum += t % 10, t /= 10;
    return (x - sum < s);
}

int main()
{
    FastIO;

    cin >> n >> s;
    ll l = -1;       // good
    ll r = 1e18 + 1; // bad
    if (n == s)
        l = n, r = n;
    while (l < r - 1)
    {
        ll mid = (l + r) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }
    cout << max(0LL, n - l) << nl;
    return 0;
}