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
    priority_queue<pair<int, int>> pq;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            pq.push({x, i + 1});
    }
    vector<pair<int, int>> ans;
    while (pq.size() > 1)
    {
        int p = pq.top().second;
        int x = pq.top().first - 1;
        pq.pop();
        int q = pq.top().second;
        int y = pq.top().first - 1;
        pq.pop();
        ans.push_back({p, q});
        if (x)
            pq.push({x, p});
        if (y)
            pq.push({y, q});
    }
    cout << ans.size() << nl;
    for (auto i : ans)
        cout << i.first << ' ' << i.second << nl;
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