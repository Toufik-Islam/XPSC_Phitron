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
    vi A;
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; ++i)
    {
        // if (A.size())
        //     cout << i sp A.back() << nl;
        if (s[i] == '+')
        {
            if (A.empty())
                A.pb(1);
            else if (A.back() != 0)
                A.pb(2);
            else
                A.pb(0);
        }
        else if (s[i] == '-' and A.size())
            A.pop_back();
        else if (s[i] == '0' and A.size() > 1 and A.back() != 1)
        {
            A.back() = 0;
        }
        else if (s[i] == '1' and (A.size() < 2 or A.back() != 0))
        {
            for (int j = A.size() - 1; j >= 0; j--)
            {
                if (A[j] == 1)
                    break;
                A[j] = 1;
            }
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
