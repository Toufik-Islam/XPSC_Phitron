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

bool bit(int mask, int pos)
{
    return (mask >> pos) & 1;
}

void TC()
{
    int x, p;
    cin >> x;
    vi ans;
    ans.pb(x);
    for (int i = 0;; ++i)
    {
        if (bit(x, i))
        {
            if (x == (1 << i))
            {
                p = i;
                break;
            }
            x -= (1 << i);
            ans.pb(x);
        }
    }
    while (p > 0)
    {
        x -= (1 << (p - 1));
        ans.pb(x);
        --p;
    }
    cout << ans.size() << nl;
    print_ara(ans, 0, ans.size());
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
