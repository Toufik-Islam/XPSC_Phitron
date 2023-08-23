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
    vector<pii> A;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.pb({x, i});
    }
    sort(all(A));
    int x, y;
    bool chk = false;
    bool inv = false;
    if (n & 1)
        x = n / 2 - 1, y = n / 2 + 1, chk = true;
    else
        x = n / 2 - 1, y = n / 2;

    int ans = 0;
    while (x > -1 and y < n)
    {
        if (!chk)
        {
            if (A[x].ss > A[y].ss)
            {
                inv = true;
                ans++;
            }
            chk = true;
            x--, y++;
            continue;
        }
        if (inv or A[x].ss > A[y].ss)
            ans++, inv = true;
        else if (A[x + 1].ss < A[x].ss or A[x + 1].ss > A[y].ss or A[y - 1].ss < A[x].ss or A[y - 1].ss > A[y].ss)
            ans++, inv = true;
        // cout << x sp y sp ans << nl;
        x--, y++;
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
