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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> A;
    int dif = 1;
    for (int i = 1; i < b - a; i++, dif++)
        if ((a + (dif * (n - 1)) >= b) && ((b - a) % i == 0))
            break;
    int add = n;
    // cout << dif << nl;
    a = b;
    while (b > 0 && add--)
    {
        A.push_back(b);
        b -= dif;
    }
    while (add-- > 0)
    {
        a += dif;
        A.push_back(a);
    }
    for (auto i : A)
        cout << i << ' ';
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
