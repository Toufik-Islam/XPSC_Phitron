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
    vector<int> A(n + 1), deg(n + 1), x(m + 1), y(m + 1);
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    for (int i = 1; i <= m; i++)
    {
        cin >> x[i] >> y[i];
        deg[x[i]]++;
        deg[y[i]]++;
    }
    if (!(m & 1))
    {
        cout << 0 << nl;
        return;
    }
    int ans = INT16_MAX;
    for (int i = 1; i <= n; i++)
        if (deg[i] & 1)
            ans = min(ans, A[i]);
    for (int i = 1; i <= m; i++)
        if (!(deg[x[i]] & 1) && !(deg[y[i]] & 1))
            ans = min(ans, A[x[i]] + A[y[i]]);
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
