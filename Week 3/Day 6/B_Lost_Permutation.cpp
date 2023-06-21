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
    int n, k, mx = 300;
    cin >> n >> k;
    vector<bool> A(mx);
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A[x] = true;
    }
    for (int i = 1; k >= i && i < mx; i++)
    {
        if (!A[i])
        {
            k -= i;
            A[i] = true;
        }
    }
    vector<int> a;
    for (int i = 1; i < mx; i++)
    {
        if (A[i])
            a.push_back(i);
    }
    (k == 0 && a.size() == a[a.size() - 1]) ? yes : no;
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
