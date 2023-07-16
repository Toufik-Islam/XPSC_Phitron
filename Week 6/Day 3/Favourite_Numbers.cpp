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
        int x;
        cin >> x;
        if (!(x & 1) && x % 7 == 0)
            cout << "Alice\n";
        else if ((x & 1) && x % 9 == 0)
            cout << "Bob\n";
        else
            cout << "Charlie\n";
    }

    return 0;
}
