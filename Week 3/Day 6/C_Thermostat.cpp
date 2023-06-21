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
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;

    if (a == b)
        cout << 0;
    else if (abs(a - b) >= x)
        cout << 1;
    else if (abs(a - l) >= x && abs(l - b) >= x)
        cout << 2;
    else if (abs(a - r) >= x && abs(r - b) >= x)
        cout << 2;
    else if (abs(a - l) >= x && abs(r - b) >= x)
        cout << 3;
    else if (abs(a - r) >= x && abs(l - b) >= x)
        cout << 3;
    else
        cout << -1;
    cout << nl;
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
