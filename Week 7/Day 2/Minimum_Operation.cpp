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

const int N = (int)1e6 + 5;

vector<long long> prime_num;

void TC()
{
    int n, k;
    cin >> n >> k;
    bool e = false, o = false;
    set<int> st, chk;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        chk.insert(x);
        (x & 1) ? o = true : e = true;
        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                while (x % j == 0)
                    x /= j;
                st.insert(j);
            }
        }
        if (x > 1)
            st.insert(x);
    }
    if (chk.size() == 1)
    {
        cout << "0\n";
        return;
    }
    if (!e or !o)
    {
        cout << "1\n2\n";
        return;
    }
    for (int i = 0; i < prime_num.size(); i++)
    {
        if (prime_num[i] > k)
            break;
        if (st.find(prime_num[i]) == st.end())
        {
            cout << 1 << nl << prime_num[i] << nl;
            return;
        }
    }
    cout << "2\n2 3\n";
}

void sieve(long long n)
{
    vector<bool> check;
    check.resize(n + 1, true);

    for (long long i = 2; i <= n; i++)
    {
        if (check[i])
            prime_num.push_back(i);
        for (long long j = i * i; j <= n; j += i)
            check[j] = false;
    }
}

int main()
{
    FastIO;
    sieve(N);

    int t = 1;
    cin >> t;
    while (t--)
        TC();

    return 0;
}
