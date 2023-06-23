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
    ll n, k;
    cin >> n >> k;
    vector<ll> A;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        if ((x & k) == k)
            A.push_back(x);
    }
    if (!A.size())
    {
        no;
        return;
    }
    ll ans = A[0];
    for (int j = 1; j < (int)A.size(); j++)
    {
        ans = A[j] & ans;
    }
    if (ans == k)
        yes;
    else
        no;
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