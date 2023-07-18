/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "ONLINE\n"
#define no cout << "DINING\n"
#define ei cout << "EITHER\n"
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    double n, m;
    cin >> n >> m;
    n -= n / 10;
    if (n < m)
        yes;
    else if (n > m)
        no;
    else
        ei;
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
