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

const int N = 2e5 + 1;
int A[N];

void solve()
{
    int n, cnt = 0, ans = 0;
    cin >> n;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        while (!(x & 1))
        {
            cnt++;
            x = (x >> 1);
        }
    }
    if (cnt >= n)
    {
        cout << ans << nl;
        return;
    }
    priority_queue<int> pq;
    for (int i = 2; i <= n; i += 2)
        pq.push(A[i]);

    while (pq.size())
    {
        ans++;
        cnt += pq.top();
        if (cnt >= n)
        {
            cout << ans << nl;
            return;
        }
        pq.pop();
    }
    cout << -1 << nl;
}

void PowRdy()
{
    for (int i = 2, x, cnt; i < N; i += 2)
    {
        x = i, cnt = 0;
        while (!(x & 1))
        {
            cnt++;
            x = (x >> 1);
        }
        A[i] = cnt;
    }
}

int main()
{
    Faster;

    PowRdy();

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}