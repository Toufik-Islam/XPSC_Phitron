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
    int n, q, even = 0, odd = 0;
    cin >> n >> q;
    ll sum = 0;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        sum += x;
        (x & 1) ? odd++ : even++;
    }
    while (q--)
    {
        int type, val;
        cin >> type >> val;
        (type & 1) ? sum += odd *val : sum += even * val;
        (val & 1 && type & 1) ? (even += odd, odd = 0) : odd;
        (val & 1 && !(type & 1)) ? (odd += even, even = 0) : odd;
        cout << sum << nl;
    }
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