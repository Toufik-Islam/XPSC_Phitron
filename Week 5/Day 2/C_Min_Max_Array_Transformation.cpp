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
    vector<int> A(n), B(n), mx(n), mn(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];

    for (int i = 0; i < n; i++)
        mn[i] = *lower_bound(B.begin(), B.end(), A[i]) - A[i];

    for (int i = n - 1, j = n - 1; i > -1; i--)
    {
        mx[i] = B[j] - A[i];
        if (A[i] > B[i - 1])
            j = i - 1;
    }

    for (int i = 0; i < n; i++)
        cout << mn[i] << " \n"[i == n - 1];
    for (int i = 0; i < n; i++)
        cout << mx[i] << " \n"[i == n - 1];
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
