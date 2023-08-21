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
    string A;
    cin >> n >> A;
    A = '#' + A;
    vector<int> Balance(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (A[i] == '(')
            Balance[i] = Balance[i - 1] + 1;
        else
            Balance[i] = Balance[i - 1] - 1;
    }
    if (Balance[n] != 0)
    {
        cout << -1 << nl;
        return;
    }
    int mn_balance = 0, mx_balance = 0;
    for (auto it : Balance)
    {
        mn_balance = min(mn_balance, it);
        mx_balance = max(mx_balance, it);
    }
    if (mn_balance == 0 || mx_balance == 0)
    {
        cout << 1 << nl;
        for (int i = 0; i < n; i++)
            cout << 1 << " \n"[i == n - 1];
        return;
    }
    cout << 2 << nl;
    int color[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int col;
        if (A[i] == '(')
            col = 1;
        else
            col = 2;
        while (i <= n && Balance[i] != 0)
        {
            color[i] = col;
            i++;
        }
        color[i] = col;
    }
    print_ara(color, 1, n + 1);
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
