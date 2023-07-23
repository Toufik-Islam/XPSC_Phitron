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
    int A[n];
    for (int i = 0, j = n - 1, s = 1; i < j; i++, j--, s += 2)
    {
        A[i] = s;
        A[j] = A[i] + 1;
    }
    for (auto it : A)
        cout << it << ' ';
    cout << nl;
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
