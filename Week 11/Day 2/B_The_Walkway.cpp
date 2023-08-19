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
    ll n, m, d;
    cin >> n >> m >> d;
    vi A;
    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        A.pb(x);
    }
    int init = m;
    for (int i = 1; i < m; ++i)
    {
        init += (A[i] - A[i - 1] - 1) / d;
    }
    if (A.front() != 1)
    {
        init++;
        init += (A.front() - 1 - 1) / d;
    }

    init += (n - A.back()) / d;

    vi del(m);
    int ans = init;
    for (int i = 1; i < m - 1; ++i)
    {
        int prv1 = (A[i] - A[i - 1] - 1) / d;
        int prv2 = (A[i + 1] - A[i] - 1) / d;
        int now = (A[i + 1] - A[i - 1] - 1) / d;

        del[i] = init - prv1 - prv2 - 1 + now;
        ans = min(ans, del[i]);
    }
    // cout << ans-1 << nl;
    if (A.front() != 1)
    {
        int prv1 = (A.front() - 1 - 1) / d;
        int prv2 = (A[1] - A[0] - 1) / d;
        int now = (A[1] - 1 - 1) / d;

        del[0] = init - prv1 - prv2 - 1 + now;
        ans = min(ans, del[0]);
    }
    else
        del[0] = init;

    // if (A.back() != n)
    {
        int prv1 = (n - A.back()) / d;
        int prv2 = (A.back() - A[m - 2] - 1) / d;
        int now = (n - A[m - 2]) / d;

        del[m - 1] = init - prv1 - prv2 - 1 + now;
        ans = min(ans, del[m - 1]);
    }
    // print_ara(del, 0, m);
    cout << ans sp count(all(del), ans) << nl;
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