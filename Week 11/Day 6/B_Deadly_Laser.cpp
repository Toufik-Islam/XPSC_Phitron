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
    int a, b, x, y, r;
    cin >> a >> b >> x >> y >> r;

    if ((a <= x + r && b <= y + r) || (x - r <= 1 && y - r <= 1) || (a <= x + r && x - r <= 1) || (b <= y + r && y - r <= 1))
        cout << "-1\n";
    else
        cout << a + b - 2 << "\n";
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
