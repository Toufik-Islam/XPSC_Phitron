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
    ll n;
    cin >> n;
    map<ll, int> mp;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                mp[i]++;
            }
        }
    }
    if (n > 1)
        mp[n]++;
    ll x, occ = -1;
    for (auto it : mp)
    {
        if (occ < it.second)
        {
            occ = it.second;
            x = it.first;
        }
    }
    vector<ll> ans;
    while (occ--)
        ans.push_back(x);
    for (auto i : mp)
    {
        if (i.first == x)
            continue;
        int c = i.second;
        while (c--)
            ans.back() *= i.first;
    }
    cout << ans.size() << nl;
    for (auto i : ans)
        cout << i << ' ';
    cout << nl;
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
