/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int md = 1e9 + 7;
#define ll long long
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    int n;
    cin >> n;
    map<int, int> A;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A[x]++;
    }

    ll ans = 0, cmp = 1, dup = 1;

    for (auto it : A)
    {
        if (it.first != cmp)
            break;
        ans = (ans + it.second * dup) % md;
        dup = (dup * it.second) % md;
        cmp++;
    }
    cout << ans % md << nl;
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    while (t--)
        TC();

    return 0;
}
