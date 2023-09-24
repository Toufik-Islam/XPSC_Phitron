/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    unsigned long long x, y,ans;
    cin >> x >> y;

    if (x == y)
        cout << x * y - (x - 1) << nl;
    else if (x > y)
    {
        if (x & 1)
            cout << (x - 1ULL) * (x - 1ULL) + y << nl;
        else
            cout << x * x - y + 1ULL << nl;
    }
    else
    {
        if (y & 1)
            cout << y * y - x + 1 << nl;
        else
            cout << (y - 1ULL) * (y - 1ULL) + x << nl;
    }
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    while (t--)
        TC();

    return 0;
}
