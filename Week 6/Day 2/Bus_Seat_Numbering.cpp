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
        if (n < 16)
        {
            if (n < 11)
                cout << "Lower Double\n";
            else
                cout << "Lower Single\n";
        }
        else
        {
            if (n < 26)
                cout << "Upper Double\n";
            else
                cout << "Upper Single\n";
        }
    }

    return 0;
}
