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

ll X_OR(ll n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return (n ^ (n - 1));
    else if (n % 4 == 2)
        return (n ^ (n - 1) ^ (n ^ 2));
    else
        return (n ^ (n - 1) ^ (n - 2) ^ (n - 3));
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << (X_OR(b) ^ X_OR(a - 1)) << nl;
}

int main()
{
    Faster;

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
