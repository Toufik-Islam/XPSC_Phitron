/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6 + 5;
const int M = (int)1e9 + 5;
const int md = (int)1e9 + 7;

#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second
#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define pb push_back
#define nl '\n'
#define sp << ' ' <<
#define print_ara(x, st, ed)      \
    for (int i = st; i < ed; i++) \
        cout << x[i] << " \n"[i == ed - 1];
#define print_map(t) \
    for (auto u : t) \
        cout << u.ff sp u.ss << nl;
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void TC()
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
    print_ara(ans, 1, n + 1);
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
