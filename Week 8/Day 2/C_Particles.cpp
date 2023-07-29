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
    ll n, mx = INT_MIN, s1 = 0, s2 = 0;
    cin >> n;
    vector<ll> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        mx = max(mx, A[i]);
    }
    if (mx <= 0)
    {
        cout << mx << nl;
        return;
    }
    for (int i = 0; i < n; i += 2)
        (A[i] > 0) ? s1 += A[i] : s1;
    for (int i = 1; i < n; i += 2)
        (A[i] > 0) ? s2 += A[i] : s2;

    cout << max(s1, s2) << nl;
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
