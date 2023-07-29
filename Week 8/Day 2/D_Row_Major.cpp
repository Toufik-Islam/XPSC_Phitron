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

string A = "";

void TC()
{
    int n;
    cin >> n;
    set<int> div;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.insert(i);
            div.insert(n / i);
        }
    }
    int corner = 1;
    for (auto val : div)
    {
        if (corner != val)
            break;
        corner++;
    }
    // cout << corner << nl;
    string ans = "";
    for (int i = 0; i < n; i++)
        ans += A[i % corner];

    cout << ans << nl;
}

int main()
{
    FastIO;

    for (char c = 'a'; c <= 'z'; c++)
        A += c;

    int t = 1;
    cin >> t;
    while (t--)
        TC();

    return 0;
}
