/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    FastIO;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0, x; i < n; i++)
        {
            cin >>
                x;
            cout << !x << ' ';
        }
        cout << '\n';
    }

    return 0;
}
