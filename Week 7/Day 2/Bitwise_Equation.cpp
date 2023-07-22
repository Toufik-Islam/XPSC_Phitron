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
    cin >> n;
    if (n == 0)
        cout << "1 3 4 5\n";
    else if (n == 1)
        cout << "1 4 3 2\n";
    else
        cout << (1LL << 32) << ' ' << (1LL << 33) << ' ' << 1 << ' ' << (n ^ 1LL) << nl;
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
