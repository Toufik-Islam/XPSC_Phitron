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
    vector<int> A(n);
    int x_or = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        x_or = x_or ^ A[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = ans ^ (x_or ^ A[i]);

    cout << (ans == 0 ? x_or : -1) << nl;
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