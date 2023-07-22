/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    int n, k;
    cin >> n >> k;
    vector<int> S(30);

    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        int j = 0;
        while (x)
        {
            if (x & 1)
                S[j]++;
            j++;
            x >>= 1;
        }
    }

    vector<int> xset(30);
    int j = 0;
    while (k)
    {
        if (k & 1)
            xset[j]++;
        j++;
        k >>= 1;
    }

    bool flag = true;
    int pos = -1;
    for (int i = 0; i < 30; i++)
    {
        if (S[i] > 0 && S[i] < n)
        {
            if (xset[i] == 0)
            {
                flag = false;
                break;
            }
            else if (pos == -1)
                pos = i;
        }
    }

    if (flag)
    {
        xset[pos] = 0;
        for (int i = pos - 1; i >= 0; i--)
            xset[i]++;
    }

    int ans = 0;
    for (int i = 0; i < 30; i++)
    {
        if (xset[i])
            ans += 1 << i;
    }
    cout << ans << nl;
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
