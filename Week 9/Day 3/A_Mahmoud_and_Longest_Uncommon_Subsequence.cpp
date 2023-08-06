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
    string a, b;
    cin >> a >> b;
    if (a == b)
        cout << "-1\n";
    else
        cout << max(a.size(), b.size()) << nl;
}

int main()
{
    FastIO;

    int t = 1;
    // cin >> t;
    while (t--)
        TC();

    return 0;
}
