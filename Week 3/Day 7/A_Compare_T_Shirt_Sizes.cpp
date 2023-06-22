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
    string A, B;
    cin >> A >> B;
    int a = A.size();
    int b = B.size();
    char ca = A.back();
    char cb = B.back();
    if (ca == cb)
    {
        if (a == b)
            cout << '=';
        else if (ca == 'S')
            cout << (a < b ? '>' : '<');
        else
            cout << (a < b ? '<' : '>');
    }
    else
        cout << (ca < cb ? '>' : '<');
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