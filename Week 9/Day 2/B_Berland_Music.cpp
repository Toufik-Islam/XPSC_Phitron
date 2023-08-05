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
    vi A;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.pb(x);
    }
    string s;
    cin >> s;
    int c = count(all(s), '0');
    set<int> z, o;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' and A[i] > c)
            o.insert(A[i]);
        if (s[i] == '1' and A[i] <= c)
            z.insert(A[i]);
    }
    // for (auto i : z)
    //     cout << i << ' ';
    // cout << nl;
    // for (auto i : o)
    //     cout << i << ' ';
    // cout << nl;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' and A[i] > c)
        {
            auto x = z.upper_bound(A[i]);
            if (x == z.end())
                x--;
            A[i] = *x;
            z.erase(x);
        }
        if (s[i] == '1' and A[i] <= c)
        {
            auto x = o.upper_bound(A[i]);
            A[i] = *x;
            o.erase(x);
        }
    }
    print_ara(A, 0, n);
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
