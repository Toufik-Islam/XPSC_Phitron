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
    vector<ll> A(n + 1), B(n + 1), pref(n + 1), ans(n + 2);
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    for (int i = 1; i <= n; i++)
    {
        cin >> B[i];
        pref[i] = pref[i - 1] + B[i];
    }
    // for (auto i : pref)
    //     cout << i << nl;
    for (int i = 1; i <= n; i++)
    {
        auto x = upper_bound(pref.begin(), pref.end(), A[i] + pref[i - 1]);
        int idx = x - pref.begin();
        pq.push(idx);

        while (pq.size() && pq.top() <= i)
            pq.pop();

        // cout << i << " -> " << idx << " -> " << pq.size() << nl;
        ans[i] += (B[i] * pq.size());

        if (idx <= n)
            ans[idx] += min(A[i] - (pref[idx - 1] - pref[i - 1]), B[idx]);
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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
