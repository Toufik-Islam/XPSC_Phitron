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
    ll n;
    cin >> n;
    vll A, B;
    for (ll i = 0, x; i < n - 1; i++)
    {
        cin >> x;
        A.pb(x);
    }
    ll x = (n * n + n) / 2;
    if (A.back() > x)
    {
        cout << "NO\n";
        return;
    }
    if (A.back() != x)
    {
        A.pb(x);
        B.pb(A[0]);
        for (int i = 1; i < n; i++)
            B.pb(A[i] - A[i - 1]);
        sort(all(B));
        for (int i = 0; i < n; i++)
        {
            if (B[i] != i + 1)
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }
    vector<bool> mp(n + 1, false);
    vi missing;
    int dup = -1, boro = -1;
    if (A[0] <= n)
        mp[A[0]] = true;
    else
        boro = A[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (mp[A[i] - A[i - 1]])
            dup = A[i] - A[i - 1];
        if (A[i] - A[i - 1] <= n)
            mp[A[i] - A[i - 1]] = true;
        else
            boro = A[i] - A[i - 1];
    }
    for (int i = 1; i <= n; i++)
        if (!mp[i])
            missing.pb(i);

    // print_ara(missing, 0, missing.size());
    if (missing.size() == 2 and (dup == missing[0] + missing[1] or boro == missing[0] + missing[1]))
        cout << "YES\n";
    else
        cout << "NO\n";
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