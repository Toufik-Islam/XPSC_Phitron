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
    vector<string> A[3];
    unordered_map<string, int> mp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string x;
            cin >> x;
            A[i].push_back(x);
            mp[x]++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (mp[A[i][j]] == 1)
                ans += 3;
            else if (mp[A[i][j]] == 2)
                ans += 1;
        }
        cout << ans << " \n"[i == 2];
    }
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