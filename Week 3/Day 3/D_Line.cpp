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
    string A;
    cin >> n >> A;
    ll ans = 0;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        ans += (A[i] == 'L' ? i : n - (i + 1));
        if ((A[i] == 'L' && i < n - (i + 1)) || (A[i] == 'R' && n - (i + 1) < i))
            pq.push(abs(i - (n - (i + 1))));
    }
    for (int i = 0; i < n; i++)
    {
        if (pq.size())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << " \n"[i == n - 1];
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