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
    ll n, k;
    cin >> n >> k;
    map<char, ll> mp;
    vector<string> a, b;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        a.pb(x);
        for (auto &c : x)
            mp[c]++;
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        if (a[i].size() != x.size())
            flag = true;
        for (auto &c : x)
            mp[c]--;
    }
    if (flag)
    {
        cout << "NO\n";
        return;
    }
    ll sum = 0;

    for (auto &i : mp)
        if (i.ss > 0)
            sum += i.ss;
    cout << (sum <= k ? "YES\n" : "NO\n");
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
