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
    vector<pair<int, int>> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i].first >> A[i].second;
    A.push_back({0, 0});
    n++;
    sort(A.begin(), A.end());
    string ans = "";
    for (int i = 1; i < n; i++)
    {
        int f = A[i].first;
        int s = A[i].second;
        if (A[i - 1].second > s)
        {
            no;
            return;
        }
        while (f != A[i - 1].first)
        {
            f--;
            ans += 'R';
        }
        while (s != A[i - 1].second)
        {
            s--;
            ans += 'U';
        }
    }
    yes;
    cout << ans << nl;
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
