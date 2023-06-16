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

const int N = 1e5 + 3;
int mp[N];

void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    for (int i = 1; i <= k; i++)
        cout << mp[i] << nl;
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
