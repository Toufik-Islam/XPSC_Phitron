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
    vi A(n + 1), B(n + 1), a(n + 1), b(n + 1), c(n + 1);
    vector<pii> V;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        a[i + 1] = b[i + 1] = 1;
        V.pb({c[i], i});
    }
    sort(rall(V));

    for (int i = 0; i < n; i++)
    {
        int k = V[i].ss;
        if (a[c[k]] == 1)
            A[k] = c[k], a[c[k]]--;
        else
            B[k] = c[k], b[c[k]]--;
    }

    int r1 = n, r2 = n;
    for (int i = 0; i < n; i++)
    {
        int k = V[i].ss;
        if (A[k] == 0)
        {
            while (a[r1] == 0)
                r1--;
            a[r1]--;
            if (r1 > B[k])
            {
                cout << "NO\n";
                return;
            }
            A[k] = r1--;
        }
        else
        {
            while (b[r2] == 0)
                r2--;
            b[r2]--;
            if (r2 > A[k])
            {
                cout << "NO\n";
                return;
            }
            B[k] = r2--;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != 0 or b[i] != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    print_ara(A, 0, n);
    print_ara(B, 0, n);
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
