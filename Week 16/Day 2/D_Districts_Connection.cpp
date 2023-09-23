/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef __int128 lll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;

#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define forr(x, n) for (int i = x; i < n; ++i)
#define ff first
#define ss second
#define pb push_back
#define nl '\n'
#define sp << ' ' <<
#define print_ara(x, st, ed)      \
    for (int i = st; i < ed; i++) \
        cout << x[i] << " \n"[i == ed - 1];
#define print_map(t) \
    for (auto u : t) \
        cout << u.ff << " -> " << u.ss << nl;
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const int N = (int)1e6 + 5;
const ll inf = (ll)1e18 + 5;
const int md = (int)1e9 + 7;

int n;
void find(int idx, bool vis[], int A[], vector<pair<int, int>> &ans)
{
    vis[idx] = true;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && A[i] != A[idx])
        {
            find(i, vis, A, ans);
            ans.push_back({idx, i});
        }
    }
}
void TC()
{
    cin >> n;
    int A[n];
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        visited[i] = false;
    }
    vector<pair<int, int>> ans;
    find(0, visited, A, ans);
    if (ans.size() != n - 1)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        for (auto i : ans)
            cout << i.first + 1 << ' ' << i.second + 1 << nl;
    }
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
