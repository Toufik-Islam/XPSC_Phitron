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
    int n, k;
    cin >> n >> k;
    vector<pii> A(k);
    vi ans(n + 1, INT_MAX);
    for (int i = 0, x; i < k; i++)
        cin >> A[i].ss;
    for (int i = 0, x; i < k; i++)
    {
        cin >> A[i].ff;
        ans[A[i].ss] = A[i].ff;
    }
    sort(all(A));

    for (int j = 0; j < k; ++j)
    {
        int idx = A[j].ss;
        int val = A[j].ff;
        int i = idx - 1;
        int v = val + 1;
        while (i > 0 and ans[i] > v)
        {
            ans[i] = v;
            i--, v++;
        }
        i = idx + 1;
        v = val + 1;
        while (i <= n and ans[i] > v)
        {
            ans[i] = v;
            i++, v++;
        }
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
