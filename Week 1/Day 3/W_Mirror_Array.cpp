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
    int n, m;
    cin >> n >> m;
    stack<int> st;
    while (n--)
    {
        for (int i = 0, x; i < m; i++)
        {
            cin >> x;
            st.push(x);
        }
        while (st.size())
        {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << nl;
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
