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

int n, k;

ll cnt(vi &a)
{
    priority_queue<int> pq;
    for (auto i : a)
        pq.push(i);

    ll ans = 0;
    while (pq.size())
    {
        int bag = k - 1;
        ans += pq.top() * 2;
        pq.pop();
        while (pq.size() and bag--)
            pq.pop();
    }
    return ans;
}

void TC()
{
    cin >> n >> k;
    vi pos, neg;
    int mx = 0;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            continue;
        mx = max(abs(x), mx);
        if (x < 0)
            neg.pb(-x);
        else
            pos.pb(x);
    }
    ll d1 = cnt(neg);
    ll d2 = cnt(pos);
    cout << d1 + d2 - mx << nl;
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
