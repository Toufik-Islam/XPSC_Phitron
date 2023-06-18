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
    int n, m;
    cin >> n >> m;
    vector<int> A[n + 2];
    for (int i = 0; i < n + 2; i++)
        A[i].resize(m + 2);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> A[i][j];

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ll sum = 0;
            int x = i, y = j;
            sum += A[i][j];
            while (x <= n && y <= m)
            {
                x++, y++;
                sum += A[x][y];
            }
            x = i, y = j;
            while (x > 0 && y > 0)
            {
                x--, y--;
                sum += A[x][y];
            }
            x = i, y = j;
            while (x > 0 && y <= m)
            {
                x--, y++;
                sum += A[x][y];
            }
            x = i, y = j;
            while (x <= n && y > 0)
            {
                x++, y--;
                sum += A[x][y];
            }
            ans = max(ans, sum);
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