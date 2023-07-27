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
    int n;
    cin >> n;
    if (n < 3)
        cout << "0\n";
    else if (n == 3)
        cout << "2\n";
    else
    {
        n -= 3;
        if (n & 1)
            cout << 3 * (n / 2) + 3 << nl;
        else
            cout << 3 * (n / 2) + 2 << nl;
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
