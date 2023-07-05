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
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int cur = A[i];
        int j = i;
        while (j < n && ((A[j] < 0 && A[i] < 0) || (A[j] > 0 && A[i] > 0)))
        {
            cur = max(cur, A[j]);
            j++;
        }
        sum += cur;
        i = j - 1;
    }
    cout << sum << nl;
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
