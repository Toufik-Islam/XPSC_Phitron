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
    ll n, k, c = 0;
    cin >> k >> n;
    vector<int> A;
    ll safe = 0;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x < k)
            A.push_back(x);
        else
            safe++;
    }
    sort(A.rbegin(), A.rend());
    for (int i = 0; i < A.size(); i++)
    {
        if (c < A[i])
        {
            safe++;
            c += (k - A[i]);
        }
        else
            break;
    }
    cout << safe << nl;
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