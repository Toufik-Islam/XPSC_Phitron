/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ra cout << "Ramos\n"
#define zl cout << "Zlatan\n"
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    int n;
    string A;
    cin >> n >> A;
    int o = count(A.begin(), A.end(), '1');
    int z = count(A.begin(), A.end(), '0');
    if (min(z, o) & 1)
        zl;
    else
        ra;
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
