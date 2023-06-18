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
    int A[n][n - 1];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> A[i][j];
            if (j == 0)
                mp[A[i][j]]++;
        }
    }
    int first, mx = -1;
    for (auto it : mp)
    {
        if (it.second > mx)
        {
            first = it.first;
            mx = it.second;
        }
    }

    vector<int> ans;
    ans.push_back(first);
    for (int i = 0, next = first; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[j][i] != next)
            {
                next = A[j][i];
                ans.push_back(next);
                break;
            }
        }
    }
    for (auto it : ans)
        cout << it << ' ';
    cout << nl;
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