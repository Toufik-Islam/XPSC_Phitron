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
    int n;
    string a, ans = "";
    cin >> n >> a;
    for (int i = 0, c; i < n; i++)
    {
        c = 0;
        ans += a[i];
        while (i < n and a[i] == a[i + 1])
            i++, c++;
        if (c & 1)
            ans += a[i];
    }
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
