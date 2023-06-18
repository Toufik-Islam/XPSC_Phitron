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
    vector<string> A(n);
    map<string, int> original;
    map<char, int> first, last;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        original[A[i]]++;
        first[A[i][0]]++;
        last[A[i][1]]++;
    }
    // for (auto it : first)
    //     cout << it.first << "  " << it.second << nl;
    // for (auto it : last)
    //     cout << it.first << "  " << it.second << nl;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        original[A[i]]--;
        first[A[i][0]]--, last[A[i][1]]--;
        ans += first[A[i][0]] + last[A[i][1]];
        ans -= 2 * original[A[i]];
        // cout << ans << nl;
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