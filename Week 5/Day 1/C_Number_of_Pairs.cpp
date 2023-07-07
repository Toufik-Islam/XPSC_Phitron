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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int mn = l - A[i];
        int mx = r - A[i];
        auto lo = lower_bound(A.begin() + i + 1, A.end(), mn);
        auto hi = upper_bound(A.begin() + i + 1, A.end(), mx);
        ans += (hi - lo);
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
