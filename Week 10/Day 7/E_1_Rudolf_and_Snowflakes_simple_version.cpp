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
    ll n;
    bool f = false;
    cin >> n;
    for (ll i = 2; i < 1050; i++)
    {
        ll x = (i * (i + 1) + 1);
        if (x == n)
        {
            cout << "YES\n";
            return;
        }
        ll p = i * i;
        while (x < n)
        {
            p *= i;
            x += p;
            if (x == n)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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
