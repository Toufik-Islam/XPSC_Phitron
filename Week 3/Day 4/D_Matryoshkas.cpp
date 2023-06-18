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
    int n;
    cin >> n;
    set<int> st;
    map<int, int> mp;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        st.insert(x);
        mp[x]++;
    }
    int ans = 0;
    for (auto i : st)
    {
        if (mp[i] > mp[i - 1])
            ans += mp[i] - mp[i - 1];
    }
    cout << ans << nl;
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