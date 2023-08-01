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

const int N = 100100;

ll a[N];

ll dif(int idx)
{
    return max(0ll, max(a[idx - 1], a[idx + 1]) - a[idx] + 1);
}

void TC()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (n & 1)
    {
        ll ans = 0;
        for (int i = 2; i < n; i += 2)
            ans += dif(i);

        cout << ans << nl;
        return;
    }

    ll sum = 0;
    for (int i = 2; i < n; i += 2)
        sum += dif(i);

    ll ans = sum;
    for (int i = n - 1; i > 1; i -= 2)
    {
        sum -= dif(i - 1);
        sum += dif(i);
        ans = min(ans, sum);
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
