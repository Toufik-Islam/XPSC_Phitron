/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)3000 + 5;
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

int add[N][N];
int bad[N][N];
int cur[N][N];

void TC()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n + 2; ++i)
    {
        for (int j = 0; j <= n + 2; ++j)
        {
            add[i][j] = 0;
            bad[i][j] = 0;
            cur[i][j] = 0;
        }
    }

    vector<string> A(n);
    int ans = 0;
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (add[i][j])
            {
                if (j > 0)
                    add[i + 1][j - 1] += add[i][j];
                else
                    add[i + 1][j] += add[i][j];
            }
            if (bad[i][j])
                bad[i + 1][j + 1] += bad[i][j];

            cur[i][j] = add[i][j] + bad[i][j];
            if (j > 0)
                cur[i][j] += cur[i][j - 1];

            if ((cur[i][j] % 2 == 0 and A[i][j] == '1') or (A[i][j] == '0' and cur[i][j] % 2 == 1))
            {
                ans++;

                // cout << i sp j << nl;
                if (j > 0)
                    add[i + 1][j - 1]++;
                else
                    add[i + 1][j]++;

                bad[i+1][j + 2]--;
            }
        }
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //         cout << cur[i][j];
    //     cout << nl;
    // }

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
