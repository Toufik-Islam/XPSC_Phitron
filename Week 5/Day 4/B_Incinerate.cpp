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
    cin >> n >> k;
    vector<pair<int, int>> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i].first;
    for (int i = 0; i < n; i++)
        cin >> A[i].second;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < n; i++)
        pq.push({A[i].second, A[i].first});

    int cur = k;
    while (k > 0 && !pq.empty())
    {
        while (!pq.empty() && pq.top().second <= cur)
            pq.pop();
        k -= pq.top().first;
        cur += k;
    }
    (pq.empty() ? yes : no);
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
