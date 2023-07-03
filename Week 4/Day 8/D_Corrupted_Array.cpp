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
    int n;
    cin >> n;
    vector<ll> A(n + 2);
    unordered_map<ll, bool> mp;
    for (int i = 0; i < n + 2; i++)
        cin >> A[i];

    sort(A.begin(), A.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        mp[A[i]] = true;
    }
    if (sum == A[n] || sum == A[n + 1])
    {
        for (int i = 0; i < n; i++)
            cout << A[i] << ' ';
    }
    else if (mp[sum + A[n] - A[n + 1]])
    {
        ll x = sum + A[n] - A[n + 1];
        bool cancel = true;
        for (int i = 0; i <= n; i++)
        {
            if (A[i] == x && cancel)
            {
                cancel = false;
                continue;
            }
            cout << A[i] << ' ';
        }
    }
    else
        cout << -1;
    cout << nl;
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
