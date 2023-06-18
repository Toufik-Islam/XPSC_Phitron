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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a < b && a < c && d > b && d > c) || (b < a && b < d && c > a && c > d) || (c < a && c < d && b > a && b > d) || (d < b && d < c && a > b && a > c))
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
