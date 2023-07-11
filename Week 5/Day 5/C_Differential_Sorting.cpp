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
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    if (A[n - 1] < A[n - 2])
    {
        cout << -1 << nl;
        return;
    }
    if (is_sorted(A.begin(), A.end()))
    {
        cout << 0 << nl;
        return;
    }
    if (A[n - 1] < 0)
    {
        cout << -1 << nl;
        return;
    }
    cout << n - 2 << nl;
    for (int i = n - 3; i >= 0; i--)
        cout << i + 1 << ' ' << n-1 << ' ' << n << nl;
    
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
