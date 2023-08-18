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

void TC()
{
    int n;
    cin >> n;
    unordered_map<int, ll> mp;
    ll ans = 0;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        int cnt = 0;
        while (x > 1)
            cnt++, x >>= 1;
        mp[cnt]++;
    }
    for (auto &i : mp)
        ans += i.second * (i.second - 1) / 2;
    cout << ans << nl;
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    while (t--)
        TC();

    return 0;
}