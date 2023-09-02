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

int move(int x)
{
    if (x == 0)
        return 0;
    int i = 0;
    while (++i)
    {
        if ((1 << i) > x)
            return i;
    }
    return INT_MAX;
}

void TC()
{
    string s;
    cin >> s;
    int n = s.size();
    s = '#' + s;
    unordered_map<char, int> mp, ans;
    for (int i = 1; i <= n; ++i)
    {
        int dif = i - mp[s[i]] - 1;
        ans[s[i]] = max(move(dif), ans[s[i]]);
        mp[s[i]] = i;
    }
    for (char i = 'a'; i <= 'z'; ++i)
    {
        if (mp.find(i) == mp.end())
            continue;

        int dif = n - mp[i];
        ans[i] = max(move(dif), ans[i]);
    }
    // print_map(ans);
    int mn = INT_MAX;
    for (auto &i : ans)
        mn = min(mn, i.ss);
    cout << mn << nl;
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