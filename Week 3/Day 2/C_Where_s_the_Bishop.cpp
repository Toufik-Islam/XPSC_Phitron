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
    int n = 8;
    char A[8][8];
    for (int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
            A[i][j] = s[j];
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (A[i][j] == '#' && A[i - 1][j - 1] == '#' && A[i - 1][j + 1] == '#' && A[i + 1][j - 1] == '#' && A[i + 1][j + 1] == '#')
            {
                cout << i + 1 << ' ' << j + 1 << nl;
                return;
            }
        }
    }
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
