/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)503;
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

int n;
int a[N];
int ans[N][N];

bool safe(int i, int j)
{
    return (i < n and j > -1);
}

void pos(int idx, int i, int j, int cnt)
{
    if (idx == cnt)
        return;

    if (safe(i, j - 1) and !ans[i][j - 1])
    {
        ans[i][j - 1] = idx;
        pos(idx, i, j - 1, cnt + 1);
    }

    else if (safe(i + 1, j) and !ans[i + 1][j])
    {
        ans[i + 1][j] = idx;
        pos(idx, i + 1, j, cnt + 1);
    }
}

void TC()
{
    cin >> n;
    for (int i = 0, x; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
    {
        ans[i][i] = a[i];
        pos(a[i], i, i, 1);
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            cout << ans[i][j] << " \n"[i == j];
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
