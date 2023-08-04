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

map<int, int> mp;
int main()
{
    FastIO;

    int n;
    cin >> n;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    int prv = 0, ans = 0;
    for (auto &i : mp)
    {
        prv += i.second;
        ans = max(ans, prv);
    }
    cout << ans << nl;
    return 0;
}
