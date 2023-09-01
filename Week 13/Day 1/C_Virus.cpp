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
    cin >> n >> m;
    vi A;
    for (int i = 0, x; i < m; i++)
    {
        cin >> x;
        A.pb(x);
    }
    sort(all(A));
    vi len;
    len.pb(A[0] - 1 + n - A[m - 1]);
    for (int i = 1; i < m; ++i)
        len.pb(max(A[i] - A[i - 1] - 1, 0));

    sort(rall(len));
    int infect = 0, ans = n;
    for (int i = 0; i < (int)len.size(); ++i)
    {
        len[i] -= infect;
        if (len[i] == 1)
            --ans;
        else if (len[i] > 1)
            ans -= (len[i] - 1);
        infect += 4;
    }
    cout << ans << nl;
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
