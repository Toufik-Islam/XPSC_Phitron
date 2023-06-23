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
    ll n;
    cin >> n;
    vector<ll> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    int l = 0, r = n - 2, box = 1;
    priority_queue<ll> pq;
    pq.push(A[n - 1]);
    while (l <= r)
    {
        if (pq.top() >= A[l])
        {
            ll x = pq.top();
            x = x ^ A[l];
            pq.pop();
            pq.push(x);
            l++;
        }
        else
        {
            box++;
            pq.push(A[r]);
            r--;
        }
    }
    cout << box << nl;
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
