/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "Lucky\n"
#define no cout << "Unlucky\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n, mn = INT_MAX;
    cin >> n;
    map<int, int> mp;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        mn = min(mn, x);
    }
    (mp[mn] & 1) ? yes : no;
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
