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

    int ans1 = 0, ans2 = 0, c1 = 0, c2 = 0, co = 1, ce = 2;

    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        if (x & 1)
        {
            ans1 += abs(co - i);
            ans2 += abs(ce - i);
            ce += 2, co += 2;
            c1++;
        }
        else
            c2++;
    }
    if (abs(c1 - c2) > 1)
        cout << "-1\n";
    else if (c1 > c2)
        cout << ans1 << nl;
    else if (c2 > c1)
        cout << ans2 << nl;
    else
        cout << min(ans1, ans2) << nl;
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
