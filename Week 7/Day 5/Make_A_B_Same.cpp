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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (a[0] != b[0] || a[n - 1] != b[n - 1])
    {
        cout << "NO\n";
        return;
    }
    int x = count(a.begin(), a.end(), 1);
    int y = count(b.begin(), b.end(), 1);
    if ((x == 0 && y > 0) || (y == 0 && x > 0))
    {
        cout << "NO\n";
        return;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (b[i] == 0 && a[i] != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
