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
    vector<int> A(n), ans;
    for (int i = n - 1; i >= 0; i--)
        cin >> A[i];
    if (A[0] == 1)
    {
        no;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
            ans.push_back(0);
        else
        {
            int cnt = 0, tmp;
            while (A[i] != 0 && i < n)
            {
                cnt++;
                i++;
            }
            tmp = cnt - 1;
            while (tmp--)
                ans.push_back(0);
            ans.push_back(cnt);
            i--;
        }
    }
    yes;
    for (auto it : ans)
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