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
    vector<pair<int, int>> A(n);
    int ans[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first;
        A[i].second = i + 1;
        mp[A[i].first]++;
    }
    sort(A.begin(), A.end());
    for (auto i : mp)
    {
        if (i.second < 2)
        {
            cout << -1 << nl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
        ans[i] = A[i].second;

    for (int i = 1; i < n; i ++)
    {
        if (A[i].first != A[i - 1].first)
            continue;
        
        swap(ans[i], ans[i - 1]);
    }
    for (auto i : ans)
        cout << i << ' ';
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
