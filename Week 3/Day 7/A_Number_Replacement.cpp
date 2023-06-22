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
    string s, ans(n, '#');
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        char replace = s[i];
        int replace_num = A[i];
        for (int j = i; j < n; j++)
        {
            if (A[j] == replace_num && (ans[j] == '#' || ans[j] == replace))
                ans[j] = replace;
            else if (A[j] == replace_num && ans[j] != replace)
            {
                no;
                return;
            }
        }
    }
    yes;
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