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
    int n;
    cin >> n;
    vector<int> A(n);
    ll sum = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    ll ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        s += A[i];
        ans = max(ans, __gcd(s, sum - s));
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
