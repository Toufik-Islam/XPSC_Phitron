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
    int n;
    cin >> n;
    vector<int> ans;
    while (n > 0)
    {
        if (n == 3)
        {
            ans.push_back(3);
            break;
        }
        n -= 2;
        ans.push_back(2);
    }
    cout << ans.size() << nl;
    for (auto i : ans)
        cout << i << ' ';
}

int main()
{
    FastIO;

    int t = 1;
    // cin >> t;
    while (t--)
        TC();

    return 0;
}
