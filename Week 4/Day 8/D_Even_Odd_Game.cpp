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
    sort(A.rbegin(), A.rend());
    ll a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1 && A[i] & 1)
            b += A[i];

        if (!(i & 1) && !(A[i] & 1))
            a += A[i];
    }
    cout << ((a == b) ? "Tie\n" : (a > b ? "Alice\n" : "Bob\n"));
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