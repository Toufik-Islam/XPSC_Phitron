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

int main()
{
    Faster;

    int t = 1;
    cin >> t;
    set<int> div;
    for (int i = 1; i * i <= t; i++)
    {
        if (t % i == 0)
        {
            div.insert(i);
            div.insert(t / i);
        }
    }
    for (auto it : div)
        cout << it << nl;
    return 0;
}
