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

int n;
void find(int idx, bool vis[], int A[], vector<pair<int, int>> &ans)
{
    vis[idx] = true;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && A[i] != A[idx])
        {
            find(i, vis, A, ans);
            ans.push_back({idx, i});
        }
    }
}
void solve()
{
    cin >> n;
    int A[n];
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        visited[i] = false;
    }
    vector<pair<int, int>> ans;
    find(0, visited, A, ans);
    if (ans.size() != n - 1)
        no;
    else
    {
        yes;
        for (auto i : ans)
            cout << i.first + 1 << ' ' << i.second + 1 << nl;
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
