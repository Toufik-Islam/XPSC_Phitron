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

ll lcm(int a, int b)
{
    return ((ll)a * (ll)b) / __gcd(a, b);
}

void TC()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mod = a % b;

    int dif1 = b - mod, dif2 = d - mod;
    if (dif1 == dif2 or (dif1 > 1 and dif2 > 1))
        cout << "1\n";
    else
        cout << (lcm(b, d) - mod) << nl;
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
