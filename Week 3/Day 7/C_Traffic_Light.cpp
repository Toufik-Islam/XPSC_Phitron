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
    int n, cnt = -1, guarantee = 0;
    char c;
    string A;
    cin >> n >> c >> A;
    A += A;
    n *= 2;
    bool st = false;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == c)
            st = true;
        if (st)
            cnt++;
        if (st && A[i] == 'g')
        {
            guarantee = max(cnt, guarantee);
            cnt = -1;
            st = false;
        }
    }
    cout << guarantee << nl;
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