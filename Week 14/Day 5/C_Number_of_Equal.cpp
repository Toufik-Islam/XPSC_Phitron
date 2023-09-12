/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    FastIO;

    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    ll ans = 0;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    for (int i = 0, x; i < m; i++)
    {
        cin >> x;
        ans += (ll)mp[x];
    }
    cout << ans << nl;
    return 0;
}
