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
    ll n, m, q;
    cin >> n >> m >> q;
    while (q--)
    {
        ll req;
        cin >> req;
        vector<int> A;
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i * m;
            if (sum == req)
            {
                A.push_back(m);
                cout << 1 << ' ' << i << nl;
                break;
            }
            if (sum > req)
            {
                sum -= i * m;
                ll tmp = req - sum;
                int ok = (tmp + i - 1) / i;
                A.push_back(ok);
                sum += ok * i;
                if (sum > req)
                    A[sum - req - 1]--;
                sum = req;
                cout << 1 << ' ' << i << nl;
                break;
            }
            A.push_back(m);
        }
        if (req > sum)
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < A.size(); i++)
            cout << A[i] << " \n"[i == A.size() - 1];
    }
}

int main()
{
    FastIO;

    int t = 1;
    // cin >> t;
    while (t--)
        TC();

    return 0;
}
