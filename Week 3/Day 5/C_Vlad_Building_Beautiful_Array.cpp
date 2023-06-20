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
    int n, even = 0, odd = 0, mn_even = INT_MAX, mn_odd = INT_MAX;
    cin >> n;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x & 1)
        {
            odd++;
            mn_odd = min(mn_odd, x);
        }
        else
        {
            even++;
            mn_even = min(mn_even, x);
        }
    }
    if (even == 0 || odd == 0 || mn_odd == 1 || mn_odd < mn_even)
        yes;
    else
        no;
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
