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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    ll ans = 0, d = 0;

    for (int i = 0; i < n; i++)
    {
        (A[i] > q) ? d = 0 : d++;
        if (d >= k)
            ans += d + 1 - k;
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