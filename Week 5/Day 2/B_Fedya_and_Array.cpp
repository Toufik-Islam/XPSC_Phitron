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
    ll mx, mn;
    cin >> mx >> mn;
    vector<ll> A;
    for (ll i = mn; i <= mx; i++)
        A.push_back(i);
    for (ll i = mx - 1; i > mn; i--)
        A.push_back(i);
    cout << A.size() << nl;
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << " \n"[i == (A.size() - 1)];
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
