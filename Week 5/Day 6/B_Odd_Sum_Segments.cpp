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
    int n, k;
    cin >> n >> k;
    vector<int> odd;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x & 1)
            odd.push_back(i + 1);
    }
    if (odd.size() < k || ((odd.size() - (k - 1)) % 2 == 0))
        no;
    else
    {
        yes;
        for (int i = 0; i < k - 1; i++)
            cout << odd[i] << ' ';
        cout << n << nl;
    }
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
