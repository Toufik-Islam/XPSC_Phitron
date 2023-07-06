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

void solve()
{
    int n;
    string A, a = "", b = "";
    cin >> n >> A;

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == '2')
        {
            if (flag)
            {
                a += '1';
                b += '1';
            }
            else
            {
                a+='2';
                b+='0';
            }
        }
        else if (A[i] == '0')
        {
            a += A[i];
            b += A[i];
        }
        else if (flag)
        {
            a += '0';
            b += '1';
            flag = false;
        }
        else
        {
            a += '1';
            b += '0';
        }
    }
    cout << a << nl << b << nl;
}

int main()
{
    Faster;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
