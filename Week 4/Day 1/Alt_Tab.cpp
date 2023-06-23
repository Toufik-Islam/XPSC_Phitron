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
    string x;
    cin >> n;
    stack<string> st;
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x] = true;
        st.push(x);
    }
    while (st.size())
    {
        if (mp[st.top()])
        {
            string x = st.top();
            mp[x] = false;
            string ans = "";
            ans += x.back();
            x.pop_back();
            ans += x.back();
            reverse(ans.begin(), ans.end());
            cout << ans;
        }
        st.pop();
    }
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
