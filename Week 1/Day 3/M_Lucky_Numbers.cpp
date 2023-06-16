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

bool ok(int n)
{
    while (n != 0)
    {
        if (n % 10 != 7 && n % 10 != 4)
            return false;
        n /= 10;
    }
    return true;
}

void solve()
{
    int a, b;
    vector<int> ans;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (ok(i))
            ans.push_back(i);
    }
    if (ans.size())
    {
        for (auto it : ans)
            cout << it << ' ';
    }
    else
        cout << -1;
    cout << nl;
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
