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
    int n, q;
    cin >> n >> q;
    mii mp;
    ll sum = 0;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        mp[i] = x;
        sum += x;
    }
    while (q--)
    {
        int t, i, v, add;
        cin >> t;
        if (t & 1)
        {
            cin >> i >> v;
            if (mp.find(i) == mp.end())
                mp[i] = add;
            if (mp[i] != v)
                sum += v - mp[i];
            mp[i] = v;
        }
        else
        {
            cin >> v;
            add = v;
            mp.clear();
            sum = (ll)n * v;
        }
        cout << sum << nl;
    }
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
