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

bool chk[1005];

int main()
{
    Faster;

    int t = 1;
    cin >> t;
    for (int i = 2; i <= t; i++)
    {
        if (!chk[i])
            for (int j = i * i; j <= t; j += i)
                chk[j] = true;
    }
    for (int i = 2; i <= t; i++)
        if (!chk[i])
            cout << i << ' ';

    return 0;
}
