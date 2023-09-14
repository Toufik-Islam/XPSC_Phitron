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

int n, x, y, t;

bool good(int num)
{
    return (num / x + num / y) >= n;
}

int main()
{
    Faster;

    cin >> n >> x >> y;

    int l = 0;             // bad
    int r = n * max(x, y); // good
    int first = min(x, y);
    t = first;
    n--;
    for (int i = 0; i < 100; i++)
    {
        int mid = (l + r) / 2;
        if (good(mid))
        {
            t = mid + first;
            r = mid;
        }
        else
            l = mid;
    }
    cout << t << nl;
    return 0;
}
