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
    int x, y;
    cin >> x >> y;
    if (x - y >= 2)
        cout << "CHEF\n";
    else if (y - x >= 2)
        cout << "CHEFINA\n";
    else
    {
        if ((min(x, y)) % 2 == 1)
            cout << "CHEF\n";
        else
            cout << "CHEFINA\n";
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
