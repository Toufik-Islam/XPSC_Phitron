/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n, prv = -1;
    cin >> n;
    vector<int> A;
    unordered_map<int, int> mp;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x == prv)
            continue;
        A.push_back(x);
        mp[x]++;
        prv = x;
    }
    mp[A[0]]--;
    mp[A[A.size() - 1]]--;
    int mn = n;
    for (int i = 0; i < A.size(); i++)
        mn = min(mn, mp[A[i]] + 1);
    cout << mn << nl;
}

int main()
{
    Faster;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}