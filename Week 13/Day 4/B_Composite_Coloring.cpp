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
    vi color(n, -1);
    vi v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        for (int j = 0; j < v.size(); j++)
        {
            if (x % v[j] == 0)
            {
                color[i] = j;
                break;
            }
        }
    }
    int id = 1;
    map<int, int> mp;
    for (int i : color)
    {
        if (mp[i] == 0)
            mp[i] = id++;
    }
    for (int i = 0; i < n; i++)
        color[i] = mp[color[i]];

    cout << id - 1 << nl;
    print_ara(color, 0, n);
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
