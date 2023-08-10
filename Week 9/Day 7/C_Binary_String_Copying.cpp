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
    int n, m;
    string a;
    cin >> n >> m >> a;
    a = '#' + a;

    vi samne_zero(n + 2), pore_one(n + 2);
    vi samne_one(n + 2), pore_zero(n + 2);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == '0')
            samne_zero[i + 1] = samne_zero[i] + 1;
        if (a[i] == '1')
            samne_one[i + 1] = samne_one[i] + 1;
    }

    for (int i = n; i > 0; i--)
    {
        if (a[i] == '1')
            pore_one[i - 1] = pore_one[i] + 1;
        if (a[i] == '0')
            pore_zero[i - 1] = pore_zero[i] + 1;
    }

    set<pii> ans;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int lp = l - samne_zero[l];
        int rp = pore_one[r] + r;
        int chk_sorted = pore_zero[l - 1] + samne_one[r + 1];
        if (chk_sorted >= r - l + 1)
            ans.insert({-1, -1});
        else
            ans.insert({lp, rp});
    }
    // print_map(ans);
    cout << ans.size() << nl;
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
