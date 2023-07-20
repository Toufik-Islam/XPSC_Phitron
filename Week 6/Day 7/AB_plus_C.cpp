/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    FastIO;

    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;
        cin >> x;
        if (x == 1)
        {
            cout << -1 << '\n';
            continue;
        }
        if (x <= 1e6)
        {
            cout << 1 << ' ' << x - 1 << ' ' << 1 << '\n';
            continue;
        }

        y = (x - 1) / 1e6;
        z = x - y * 1e6;
        cout << 1000000 << ' ' << y << ' ' << z << '\n';
    }

    return 0;
}
