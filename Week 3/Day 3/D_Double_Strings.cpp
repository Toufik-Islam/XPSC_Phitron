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
    unordered_map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        mp[A[i]] = true;
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 0; j < A[i].size(); j++)
        {
            string x = A[i].substr(0, j);
            string y = A[i].substr(j, A[i].size() - j);
            if (mp[x] && mp[y])
            {
                ans += '1';
                ok = true;
                break;
            }
        }
        if (!ok)
            ans += '0';
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