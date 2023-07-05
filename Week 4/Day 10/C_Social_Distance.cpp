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
    int n, k, ans = 0;
    string s;
    cin >> n >> k >> s;
    if (count(s.begin(), s.end(), '1') == 0)
    {
        ans++;
        s[0] = '1';
    }
    vector<int> A(n + 1);
    for (int i = 0; i < n; i++)
        A[i + 1] = ((s[i] == '1') + A[i]);

    // for (auto i : A)
    //     cout << i << ' ';
    // cout << nl << nl;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            i += k;
        else
        {
            if ((i + k < n && A[i + 1] == A[i + 1 + k]) || (i + k >= n && A[i + 1] == A[n]))
                ans++, i += k;
        }
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
