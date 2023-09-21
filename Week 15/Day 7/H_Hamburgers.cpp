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

ll B_available, S_available, C_available, B_cost, S_cost, C_cost, money, B_need, S_need, C_need;

bool good(ll n)
{
    ll b = 0, c = 0, s = 0;
    if (B_need * n > B_available)
        b = (((B_need * n) - B_available) * B_cost);
    if (C_need * n > C_available)
        c = (((C_need * n) - C_available) * C_cost);
    if (S_need * n > S_available)
        s = (((S_need * n) - S_available) * S_cost);
    ll total_cost = b + c + s;
    // cout << total_cost << " " << money << nl;
    return total_cost <= money;
}

int main()
{
    Faster;

    string A;
    cin >> A;
    for (auto it : A)
    {
        if (it == 'B')
            B_need++;
        else if (it == 'S')
            S_need++;
        else
            C_need++;
    }

    cin >> B_available >> S_available >> C_available >> B_cost >> S_cost >> C_cost >> money;

    ll l = 0;          // good
    ll r = 1e12 + 500; // bad
    while (l < r - 1)
    {
        ll mid = (l + r) / 2;
        // cout << l << " " << r << nl;
        // cout << mid << nl;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l << nl;
    return 0;
}
