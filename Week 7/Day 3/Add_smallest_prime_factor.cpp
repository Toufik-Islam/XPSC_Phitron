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

int A[11] = {1, 1, 2, 3, 2, 5, 2, 7, 2, 3, 2};

void TC()
{
    int a, b;
    cin >> a >> b;
    a += A[a];
    b -= a;
    int ans = (b + 1) / 2 + 1;
    cout << ans << '\n';
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
