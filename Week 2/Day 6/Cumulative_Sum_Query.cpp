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
    vector<ll> A(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        A[i] += A[i - 1];
    }
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << A[r + 1] - A[l] << nl;
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