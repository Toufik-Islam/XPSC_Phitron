/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    int a, b, year;
    char c;
    cin >> a >> c >> b >> c >> year;
    if (a <= 12 && b <= 12)
        cout << "BOTH\n";
    else if (a > 12)
        cout << "DD/MM/YYYY\n";
    else
        cout << "MM/DD/YYYY\n";
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
