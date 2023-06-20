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

string A = "Yes";

void solve()
{
    string x;
    cin >> x;
    (A.find(x) != string::npos) ? yes : no;
}

int main()
{
    Faster;

    for (int i = 0; A.size() < 50; i++)
        A += A;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
