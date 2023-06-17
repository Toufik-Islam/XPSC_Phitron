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
    int n, xtra = 0;
    cin >> n;
    set<int> st;
    unordered_map<int, int> mp;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        st.insert(x);
        mp[x]++;
    }

    for (auto it : mp)
        xtra += ((it.second - 1) & 1);
    cout << st.size() - (xtra & 1) << nl;
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