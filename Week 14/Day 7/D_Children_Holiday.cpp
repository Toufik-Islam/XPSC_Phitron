/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

// FK.. I was taking input in wrong serial..

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

ll n, k;
vector<int> A[3];
vector<int> ans;

bool good(ll Time)
{
    ll max_ballon = 0;
    for (int i = 0; i < n; i++)
    {
        ll one_ballon = A[0][i];
        ll streak = A[1][i];
        ll rest_time = A[2][i];

        // Possible ballon in time
        max_ballon += ((Time / (one_ballon * streak + rest_time)) * streak) + min(streak, ((Time % (one_ballon * streak + rest_time)) / one_ballon));
    }
    return max_ballon >= k;
}

void solve()
{

    cin >> k >> n;
    ans.resize(n);
    for (int i = 0, x, y, z; i < n; i++)
    {
        cin >> x >> y >> z;
        A[0].push_back(x);
        A[1].push_back(y);
        A[2].push_back(z);
    }

    if (k == 0)
    {
        cout << 0 << nl;
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
        return;
    }
    ll l = 0;   // bad
    ll r = 1e9; // good

    while (l < r - 1)
    {
        ll mid = (l + r) / 2;
        if (good(mid))
        {
            r = mid;
            ll cnt = k;

            for (int i = 0; i < n; i++)
            {

                ll one_ballon = A[0][i];
                ll streak = A[1][i];
                ll rest_time = A[2][i];

                // Possible ballon in time
                if (cnt > 0)
                {
                    ans[i] = min(cnt, ((mid / (one_ballon * streak + rest_time)) * streak) + min(streak, ((mid % (one_ballon * streak + rest_time)) / one_ballon)));
                    cnt -= ans[i];
                }
                else
                    ans[i] = 0;
            }
        }
        else
            l = mid;
        // cout << l << ' ' << r << nl;
    }
    cout << r << nl;
    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
}

int main()
{
    Faster;

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
