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

bool two_div(int n)
{
    set<int> div;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;

            div.insert(i);
        }
    }
    return div.size() == 2;
}

int main()
{
    Faster;

    int n, ans = 0;
    cin >> n;
    for (int i = 6; i <= n; i++)
    {
        if (two_div(i))
            ans++;
    }
    cout << ans << nl;
    return 0;
}