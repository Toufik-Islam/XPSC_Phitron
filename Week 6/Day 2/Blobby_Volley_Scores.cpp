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
    string s;
    int n;
    cin >> n >> s;
    bool a = true;
    int A = 0, B = 0;
    for (auto i : s)
    {
        if (a)
        {
            if (i == 'A')
                A++;
            else
                a = false;
        }
        else
        {
            if (i == 'B')
                B++;
            else
                a = true;
        }
    }
    cout << A << ' ' << B << nl;
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
