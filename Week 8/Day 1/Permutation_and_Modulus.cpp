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
        
        for(int i=2;i<=n;i++)
            cout << i << ' ';
        
        cout << "1\n";
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
