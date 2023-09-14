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

ll n, k;
vector<ll> A;

bool good(ll grp)
{
    ll mem = 0;
    for (int i = 0; i < n; i++)
        mem += min(grp, A[i]);
    return mem >= grp * k;
}

int main()
{
    Faster;

    cin >> k >> n;
    A.resize(n);
    for (auto &it : A)
        cin >> it;

    ll l = 0;    // good
    ll r = 1e15; // bad
    while (l < r - 1)
    {
        ll mid = (l + r) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l << nl;
    return 0;
}
