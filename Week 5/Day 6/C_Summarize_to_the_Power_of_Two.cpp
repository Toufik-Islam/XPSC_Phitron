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

const ll N = 1e12;
vector<ll> p;
void solve()
{
    int n, sz = p.size();
    cin >> n;
    vector<ll> A;
    map<ll, int> mp;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.push_back(x);
        mp[x]++;
    }
    int ans = n;
    for (auto val : A)
    {
        for (int i = 0; i < sz; i++)
        {
            if (mp.find(p[i] - val) !=mp.end())
            {
                if (val == p[i] - val && mp[val] == 1)
                    continue;
                ans--;
                break;
            }
        }
    }
    cout << ans << nl;
}

int main()
{
    Faster;

    int t = 1;
    for (ll i = 1; i < N; i *= 2)
        p.push_back(i);
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
