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
    int n, aa, bb, w;
    cin >> n;
    deque<int> a, b, curA, curB;
    cin >> aa;
    for (int i = 0, x; i < aa; i++)
    {
        cin >> x;
        a.push_back(x);
        if (x == n)
            w = 1;
    }
    cin >> bb;
    for (int i = 0, x; i < bb; i++)
    {
        cin >> x;
        b.push_back(x);
        if (x == n)
            w = 2;
    }
    int st=0;
    curA = a;
    curB = b;
    int round = 0;
    while (curA.size() and curB.size())
    {
        if (curA.front() < curB.front())
        {
            int x = curA.front();
            int y = curB.front();
            curA.pop_front();
            curB.pop_front();
            curB.push_back(x);
            curB.push_back(y);
        }
        else
        {
            int x = curA.front();
            int y = curB.front();
            curA.pop_front();
            curB.pop_front();
            curA.push_back(y);
            curA.push_back(x);
        }
        // for (auto i : curA)
        //     cout << i << ' ';
        // cout << nl;
        // for (auto i : curB)
        //     cout << i << ' ';
        // cout << nl;
        // if (curA == a and curB == b)
        if (round==N)
        {
            cout << "-1\n";
            return;
        }
        // if(st==15)
        // return;
        // st++;
        round++;
    }
    cout << round sp w << nl;
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
