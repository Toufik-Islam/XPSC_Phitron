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
    int n, k;
    cin >> n >> k;
    vi A, ans;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.pb(x);
    }
    if (n == 1)
    {
        cout << A[0] << nl;
        return;
    }
    bool big = true;
    for (int i = 1; i < n; ++i)
    {
        if (big)
        {
            while (i < n and A[i - 1] < A[i])
                i++;
            big = false;
        }
        else
        {
            while (i < n and A[i - 1] > A[i])
                i++;
            big = true;
        }
        i--;
        ans.pb(A[i]);
    }
    if (!(ans.size() & 1))
        ans.pop_back();
    ll s = 0;
    for (int i = 0; i < ans.size(); i++)
        s += i & 1 ? -ans[i] : ans[i];
    cout << s << nl;
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