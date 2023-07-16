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

char Adj[2][N];
int ans;
int n;

void dfs(int j, int i)
{
    if (j == n || Adj[i][j] != 'B')
        return;
    ans++;
    if (i == 0)
    {
        if (Adj[i + 1][j] == 'B')
        {
            ans++;
            dfs(j + 1, i + 1);
        }
        else if (Adj[i][j + 1] == 'B')
        {
            // ans++;
            dfs(j + 1, i);
        }
    }
    else
    {
        if (Adj[i - 1][j] == 'B')
        {
            ans++;
            dfs(j + 1, i - 1);
        }
        else if (Adj[i][j + 1] == 'B')
        {
            // ans++;
            dfs(j + 1, i);
        }
    }
}

void TC()
{
    cin >> n;
    string a, b;
    cin >> a >> b;
    // cout << a sp b;
    for (int i = 0; i < n; i++)
        Adj[0][i] = a[i];
    for (int i = 0; i < n; i++)
        Adj[1][i] = b[i];
    int pos = -1, mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (Adj[0][i] == 'B')
        {
            pos = i;
            break;
        }
    }
    // cout << nl << pos << nl;
    ans = 0;
    if (pos != -1)
    {
        // ans++;
        dfs(pos, 0);
    }
    // cout << ans << nl;
    mx = max(mx, ans);
    ans = 0;
    pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (Adj[1][i] == 'B')
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
    {
        // ans++;
        dfs(pos, 1);
    }
    // cout << ans << nl;
    mx = max(mx, ans);
    // cout << mx << nl;
    int bc = count(all(a), 'B') + count(all(b), 'B');
    if (mx == bc)
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
        // cout << "Case #" << t << ": ";
        TC();
    }
    return 0;
}
