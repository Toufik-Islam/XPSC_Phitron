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

    int n = 1;
    cin >> n;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i == n / 2)
                cout << 'X';
            else if (i == j && j < n / 2)
                cout << '\\';
            else if (j == n - i - 1 && j > n / 2)
                cout << '/';
            else
                cout << '*';
        }
        cout << nl;
    }
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && j < n / 2)
                cout
                    << '/';
            else if (j == n - i - 1 && j > n / 2)
                cout
                    << '\\';
            else
                cout << '*';
        }
        cout << nl;
    }
    return 0;
}
