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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == 0)
    {
        cout << "1\n";
        return;
    }
    int ans = min(a + c, a + b) * 2 + 1;
    int total = a + b + c + d;
    cout << min(total, ans) << nl;
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
