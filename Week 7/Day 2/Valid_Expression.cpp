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
    int n, s;
    cin >> n >> s;
    string ans = "";
    if (s < -n + 1 or s > n + 1)
    {
        cout << "-1\n";
        return;
    }
    int x = 1;
    while (x != s)
    {
        if (s < x)
            x--, ans += '-';
        else
            x++, ans += '+';
    }
    while (ans.size() < n)
        ans += '*';
    cout << ans << nl;
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
