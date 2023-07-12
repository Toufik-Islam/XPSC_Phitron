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
    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A[i] -= x;
    }
    sort(A.begin(), A.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << ans << nl;
        if (A[i] <= 0)
        {
            auto up = upper_bound(A.begin() + i, A.end(), abs(A[i]));
            ans += (A.end() - up);
        }
        else
            ans += (n - 1 - i);
    }
    cout << ans << nl;
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
