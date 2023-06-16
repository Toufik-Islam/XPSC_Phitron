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
    vector<int> A(n), ans;
    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0, j = 0, l; i < n && j < n; i += k)
    {
        int mn = INT_MAX;
        for (j = i, l = 0; j < n && l < k; j++, l++)
        {
            mn = min(mn, A[j]);
        }
        ans.push_back(mn);
    }
    for (auto it : ans)
        cout << it << ' ';
}

int main()
{
    Faster;

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
