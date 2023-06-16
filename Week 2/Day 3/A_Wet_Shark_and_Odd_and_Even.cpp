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
    vector<int> A;
    ll ans = 0;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (!(x & 1))
            ans += x;
        else
            A.push_back(x);
    }
    sort(A.begin(), A.end());
    while (A.size() > 1)
    {
        ans += A[A.size() - 1] + A[A.size() - 2];
        A.pop_back();
        A.pop_back();
    }
    cout << ans << nl;
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