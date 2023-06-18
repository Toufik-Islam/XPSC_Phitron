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

string PI = "314159265358979323846264338327";

void solve()
{
    string A;
    cin>> A;
    int cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == PI[i])
            cnt++;
        else
            break;
    }
    cout << cnt << "\n";
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
