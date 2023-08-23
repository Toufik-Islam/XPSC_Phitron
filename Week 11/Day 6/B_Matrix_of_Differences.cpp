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
    int a = 1, b = n * n;
    int A[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j % 2 == 1)
                {
                    A[i][j] = b;
                    b--;
                }
                else
                {
                    A[i][j] = a;
                    a++;
                }
            }
        }
        else
        {
            for (int j = n; j > 0; j--)
            {
                if (j % 2 == 1)
                {
                    A[i][j] = a;
                    a++;
                }
                else
                {
                    A[i][j] = b;
                    b--;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << A[i][j] << ' ';
        cout << '\n';
    }
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
