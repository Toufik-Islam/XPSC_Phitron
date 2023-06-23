/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    ll car, shop, time;
    cin >> car >> shop >> time;
    vector<ll> C(car), S(shop);
    for (int i = 0; i < car; i++)
        cin >> C[i];
    for (int i = 0; i < shop; i++)
    {
        cin >> S[i];
        S[i] *= time;
    }
    sort(C.rbegin(), C.rend());
    sort(S.rbegin(), S.rend());
    ll ans = 0;
    for (int i = 0; i < min(car, shop); i++)
    {
        ans += min(C[i], S[i]);
    }
    cout << ans << nl;
}

int main()
{
    Faster;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
