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
    int n, total, mx;
    cin >> n >> total >> mx;
    vector<int> A;
    A.resize(n);
    mx = total - mx;
    A[0] = mx;
    total -= mx;
    n--;
    for (int i = 1; i < A.size(); i++)
    {
        A[i] = total / n;
        total -= (total / n);
        n--;
    }
    for (auto it : A)
        cout << it << ' ';
    cout << nl;
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