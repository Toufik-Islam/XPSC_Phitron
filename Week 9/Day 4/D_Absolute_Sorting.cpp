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
    vi A;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.pb(x);
    }
    int mx = 1e9, mn = 0;
    for (int i = 0, j = 1; j < n; ++i, ++j)
    {
        int midL = (A[i] + A[j]) / 2;
        int midR = (A[i] + A[j] + 1) / 2;
        if (A[i] < A[j])
            mx = min(mx, midL);
        if (A[i] > A[j])
            mn = max(mn, midR);
    }
    if (mx < mn)
        cout << "-1\n";
    else
        cout << mn << nl;
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
