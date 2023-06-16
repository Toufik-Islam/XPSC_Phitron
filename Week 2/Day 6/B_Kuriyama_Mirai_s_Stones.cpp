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
    int n, q;
    cin >> n;
    vector<ll> A(n), pref(n + 1);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + A[i];
    A.push_back(0);
    sort(A.begin(), A.end());
    for (int i = 1; i <= n; i++)
        A[i] += A[i - 1];
    cin >> q;
    while (q--)
    {
        int op, l, r;
        cin >> op >> l >> r;
        if (op == 1)
            cout << pref[r] - pref[l - 1] << nl;
        else
            cout << A[r] - A[l - 1] << nl;
    }
}

int main()
{
    Faster;

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}