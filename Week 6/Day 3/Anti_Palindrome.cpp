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
    int n, cnt = 0;
    string A;
    cin >> n >> A;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[A[i]]++;
    }
    if (mp.size() == 1 && (n & 1))
    {
        cout << 2 << nl;
        return;
    }
    if (mp.size() == 1 && !(n & 1))
    {
        cout << 1 << nl;
        return;
    }
    for (auto it : mp)
    {
        if (it.ss & 1)
            cnt++;
        if (cnt > 1)
        {
            cout << 0 << nl;
            return;
        }
    }
    cout << 1 << nl;
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << t << ": ";
        TC();
    }
    return 0;
}
