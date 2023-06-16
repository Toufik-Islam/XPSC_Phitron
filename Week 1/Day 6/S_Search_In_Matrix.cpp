/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "will not take number\n"
#define no cout << "will take number\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n, m, k;
    cin >> n >> m;
    map<int, bool> mp;
    for (int i = 0, x; i < n * m; i++)
    {
        cin >> x;
        mp[x] = true;
    }
    cin >> k;
    mp[k] ? yes : no;
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
