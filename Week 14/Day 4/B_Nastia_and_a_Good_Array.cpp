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
    int mn = INT_MAX, idx;

    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x < mn)
            mn = x, idx = i;
        A.pb(x);
    }
    if (idx != 0)
    {
        cout << n << nl;
        cout << 1 sp idx + 1 sp A[idx] sp A[idx] + 1 << nl;
        A[0] = A[idx];
        A[idx]++;
    }
    else
        cout << n - 1 << nl;
    for (int i = 1; i < n; ++i)
    {
        A[i] = A[i - 1] + 1;
        cout << 1 sp i + 1 sp A[0] sp A[i] << nl;
    }
    // print_ara(A, 0, n);
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
