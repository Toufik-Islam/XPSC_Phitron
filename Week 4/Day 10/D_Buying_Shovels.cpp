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

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans;
    for (int i = 1, chk = n; i * i <= n; i++)
    {
        if (i == 1)
        {
            ans = chk / i;
            if (n / i <= k)
                ans = min(ans, chk / (n / i));
            continue;
        }
        // cout << ans<<nl;
        if (n % i == 0)
        {
            if (i <= k)
                ans = min(ans, chk / i);
            if (n / i <= k)
                ans = min(ans, chk / (n / i));
        }
    }
    cout << ans << nl;
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
