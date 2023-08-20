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

string make(ll n)
{
    string s = "";
    if (n % 100)
        s += to_string(n % 100);
    n /= 100;

    if (n % 10)
    {
        string tmp = s;
        s = to_string(n % 10) + " shata";
        if (tmp.size())
            s = s + " " + tmp;
    }

    n /= 10;
    if (n % 100)
    {
        string tmp = s;
        s = to_string(n % 100) + " hajar";
        if (tmp.size())
            s = s + " " + tmp;
    }

    n /= 100;
    if (n % 100)
    {
        string tmp = s;
        s = to_string(n % 100) + " lakh";
        if (tmp.size())
            s = s + " " + tmp;
    }

    n /= 100;
    if (n)
    {
        string tmp = s;
        s = make(n) + " kuti";
        if (tmp.size())
            s = s + " " + tmp;
    }

    return s;
}

int main()
{
    // FastIO;

    ll n, cnt = 1;
    while (scanf("%lld", &n) != EOF)
    {
        // cin >> n;
        printf("%4d. ", cnt);
        if (n == 0)
            printf("0\n");
        else
        {
            string s = make(n);
            cout << s << nl;
            // printf("%s", s);
        }
        cnt++;
    }
    return 0;
}
