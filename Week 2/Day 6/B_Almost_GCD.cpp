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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (auto it : A)
    {
        for (int i = 2; i <= it; i++)
        {
            if (it % i == 0)
            {
                while (it % i == 0)
                    it /= i;
                mp[i]++;
            }
        }
    }
    int mx = -1, ans;
    for (auto it : mp)
    {
        if (mx < it.second)
        {
            mx = it.second;
            ans = it.first;
        }
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
