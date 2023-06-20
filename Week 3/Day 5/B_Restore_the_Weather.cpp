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
    vector<pair<int, int>> A(n);
    vector<int> B(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first;
        A[i].second = i;
    }
    for (auto &i : B)
        cin >> i;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < n; i++)
        ans[A[i].second] = B[i];
    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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
