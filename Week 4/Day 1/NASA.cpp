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

vector<ll> pal;

bool ok(ll x)
{
    string a, b;
    a = b = to_string(x);
    reverse(a.begin(), a.end());
    return a == b;
}

void pre_calc()
{
    for (ll i = 0; i < (1 << 15); i++)
        if (ok(i))
            pal.push_back(i);
}

void solve()
{
    int n;
    cin >> n;
    unordered_map<ll, ll> mp;
    set<ll> st;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        st.insert(x);
    }
    ll ans = 0;
    for (auto i : st)
    {
        ans += (mp[i] * (mp[i] + 1)) / 2;
        for (int j = 0; j < pal.size(); j++)
        {
            ll chk = i ^ pal[j];
            if (mp[chk] && chk < i)
                ans += (mp[chk] * mp[i]);
        }
    }
    cout << ans << nl;
}

int main()
{
    pre_calc();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
