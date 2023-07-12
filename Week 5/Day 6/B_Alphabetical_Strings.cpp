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
    string A;
    cin >> A;
    int i = -1;
    for (int k = 0; k < A.size(); k++)
        if (A[k] == 'a')
            i = k;
    int j = i + 1;
    char c = 'a';
    while (i > -1 || j < A.size())
    {
        if (i > -1 && A[i] == c)
            c++, i--;
        else if (j < A.size() && A[j] == c)
            c++, j++;
        else
        {
            no;
            return;
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
