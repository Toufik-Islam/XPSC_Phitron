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
    int n, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x & 1)
            odd++;
        else
            even++;
        if (x < 0)
            neg++;
        if (x > 0)
            pos++;
    }
    cout << "Even: " << even << nl << "Odd: " << odd << nl << "Positive: " << pos << nl << "Negative: " << neg << nl;
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
