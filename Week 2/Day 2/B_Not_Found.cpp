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

bool freq[26];

void solve()
{
    string A;
    cin >> A;
    for (int i = 0; i < A.size(); i++)
        freq[A[i] - 'a'] = true;
    for (int i = 0; i < 26; i++)
    {
        if (!freq[i])
        {
            cout << (char)(i + 'a') << nl;
            return;
        }
    }
    cout << "None" << nl;
}

int main()
{
    Faster;

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
