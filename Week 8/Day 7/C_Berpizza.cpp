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
    multimap<int, int, greater<int>> mp;
    set<int> done;
    queue<int> q;
    for (int i = 1, serial = 1, cur = 1, x, y; i <= n; i++)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            mp.insert({y, -cur++});
        }
        else if (x == 2)
        {
            while (done.find(serial) != done.end())
                serial++;

            q.push(serial);
            done.insert(serial++);
        }
        else
        {
            while (done.find(-mp.begin()->ss) != done.end())
                mp.erase(mp.begin());

            q.push(-mp.begin()->ss);
            done.insert(-mp.begin()->ss);
            mp.erase(mp.begin());
        }
    }
    while (q.size())
    {
        cout << q.front() << ' ';
        q.pop();
    }
}

int main()
{
    FastIO;

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
