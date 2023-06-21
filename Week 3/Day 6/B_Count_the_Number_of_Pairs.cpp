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
    string x;
    cin >> n >> k >> x;

    vector<int> A(26), B(26);
    for (int i = 0; i < n; i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
            A[x[i] - 'a']++;
        else
            B[x[i] - 'A']++;
    }
    ll ans = 0;
    for (int i = 0; i < 26; i++)
    {
        int m = min(A[i], B[i]);
        ans += m;
        A[i] -= m, B[i] -= m;
        A[i] /= 2, B[i] /= 2;
        m = min(k, max(A[i], B[i]));
        ans += m;
        k -= m;
    }
    cout << ans << nl;
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
