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
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    ll mx = 0, s = 0;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A.rbegin(), A.rend());
    for (int i = 0; i < k - 1; i++)
    {
        s += A[i];
        mx = max(s, mx);
    }
    for (int i = 0, j = k - 1; j < n; i++, j++)
    {
        s += A[j];
        mx = max(s, mx);
        s -= A[i];
    }
    cout << mx << nl;
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
