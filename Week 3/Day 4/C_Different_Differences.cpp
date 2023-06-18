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
    cin >> k >> n;
    int diff = n - k;
    vector<int> A(k);
    A[0] = 1, A[1] = 2;

    for (int i = 2, j = 3, chk = 1; i < k; i++, j++)
    {
        if (diff >= chk)
        {
            diff -= chk;
            j += chk;
            chk++;
        }
        A[i] = j;
    }
    for (auto it : A)
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