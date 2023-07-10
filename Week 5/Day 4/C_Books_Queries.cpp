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
    int q;
    cin >> q;
    map<int, int> L, R;
    int l = 0, r = 0;
    while (q--)
    {
        int x;
        char c;
        cin >> c >> x;
        if (c == 'L')
        {
            L[x] = l;
            l++;
        }
        else if (c == 'R')
        {
            R[x] = r;
            r++;
        }
        else
        {
            int ls = L.size(), rs = R.size();
            if (L.find(x) != L.end())
                cout << min(ls - L[x] - 1, L[x] + rs) << nl;
            else
                cout << min(rs - R[x] - 1, ls + R[x]) << nl;
        }
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
