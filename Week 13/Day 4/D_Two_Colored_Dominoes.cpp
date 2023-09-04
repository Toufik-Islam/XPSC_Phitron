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
    vector<string> A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    for (int i = 0; i < n; ++i)
    {
        int cnt = 0;
        for (int j = 0; j < m; ++j)
        {
            if (A[i][j] == 'U' or A[i][j] == 'D')
                cnt++;
        }
        if (cnt & 1)
        {
            cout << "-1\n";
            return;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        int cnt = 0;
        for (int j = 0; j < n; ++j)
        {
            if (A[j][i] == 'L' or A[j][i] == 'R')
                cnt++;
        }
        if (cnt & 1)
        {
            cout << "-1\n";
            return;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        bool col = true;
        for (int j = 0; j < m; ++j)
        {
            if (A[i][j] == 'U')
            {
                if (col)
                {
                    A[i][j] = 'W';
                    A[i + 1][j] = 'B';
                }
                else
                {
                    A[i][j] = 'B';
                    A[i + 1][j] = 'W';
                }
                col = !col;
            }
        }
    }
    for (int i = 0; i < m; ++i)
    {
        bool col = true;
        for (int j = 0; j < n; ++j)
        {
            if (A[j][i] == 'L')
            {
                if (col)
                {
                    A[j][i] = 'W';
                    A[j][i + 1] = 'B';
                }
                else
                {
                    A[j][i] = 'B';
                    A[j][i + 1] = 'W';
                }
                col = !col;
            }
        }
    }

    for (auto i : A)
    {
        for (auto j : i)
            cout << j;
        cout << nl;
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
