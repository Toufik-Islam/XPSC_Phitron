/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    int n, m;
    cin >> n >> m;
    if (n > 36 * m)
        no;
    else
        yes;
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
