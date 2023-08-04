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

map<int, int> mp;

int main()
{
    FastIO;

    int n;
    cin >> n;
    for (int i = 0, l, r; i < n; i++)
    {
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    int pre = 0;
    for (auto &i : mp)
    {
        if (i.second + pre > 2)
        {
            cout << "NO\n";
            return 0;
        }
        pre += i.second;
    }
    cout << "YES\n";
    return 0;
}