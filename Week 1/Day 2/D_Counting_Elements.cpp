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

int A[1005];

void solve()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A[x]++;
    }
    for (int i = 1; i < 1002; i++)
    {
        if (A[i] > 0)
            ans += A[i - 1];
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
