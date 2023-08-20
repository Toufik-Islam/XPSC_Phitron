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

int cnt;

bool palindrome(string x)
{
    for (int i = 0, j = x.size() - 1; i < j; i++, j--)
        if (x[i] != x[j])
            return false;
    return true;
}

ll rev(ll n)
{
    string a = to_string(n);
    reverse(a.begin(), a.end());
    return stoll(a);
}

void TC()
{
    cnt = 0;
    ll n;
    cin >> n;
    while (1)
    {
        cnt++;
        n = n + rev(n);
        if (palindrome(to_string(n)))
            break;
    }
    cout << cnt << ' ' << n << nl;
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
