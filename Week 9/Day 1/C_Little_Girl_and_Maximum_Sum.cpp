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

int mp[N];

void TC()
{
    int n, q;
    cin >> n >> q;
    vi A;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.pb(x);
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    for (int i = 1; i < N; ++i)
        mp[i] += mp[i - 1];

    sort(mp, mp + N, greater<int>());
    sort(rall(A));

    ll ans = 0;
    for (int i = 0; i < n; ++i)
        ans += (ll)A[i] * mp[i];

    cout << ans << nl;
}

int main()
{
    FastIO;

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
