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
    int n, t;
    ll ans = 0;
    cin >> n >> t;

    map<int, ll> A;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        A[x] += y;
        ans += A[x];
        cout << ans << nl;
    }
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
