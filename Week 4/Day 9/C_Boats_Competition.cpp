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
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            st.insert(A[i] + A[j]);
    int team = 0;
    for (auto sum : st)
    {
        int tm = 0;
        for (int i = 0, j = n - 1; i < j;)
        {
            if (A[i] + A[j] == sum)
            {
                tm++;
                i++;
                j--;
            }
            else if (A[i] + A[j] < sum)
                i++;
            else
                j--;
        }
        team = max(team, tm);
    }
    cout << team << nl;
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
