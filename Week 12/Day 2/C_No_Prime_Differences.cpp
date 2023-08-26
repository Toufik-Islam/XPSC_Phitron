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
    int n, m, cnt = 1;
    cin >> n >> m;

    int A[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            A[i][j] = cnt++;

    for (int i = 1; i < n; i += 2)
        for (int j = 0; j < m; j++)
            cout << A[i][j] << " \n"[j == m - 1];

    for (int i = 0; i < n; i += 2)
        for (int j = 0; j < m; j++)
            cout << A[i][j] << " \n"[j == m - 1];
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