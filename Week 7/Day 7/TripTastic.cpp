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

ll n, m, stu, sum;

bool ok(vector<ll> A[], int mid, vector<ll> dp[])
{
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            if (A[x][y] == 0)
                continue;
            ll i = x + mid;
            ll j = y + mid;
            i = min(i, n - 1);
            j = min(j, m - 1);

            ll low_x = x - (mid + 1);
            ll low_y = y - (mid + 1);
            ll cur = dp[i][j];
            if (low_x >= 0)
                cur -= dp[low_x][j];

            if ((low_y) >= 0)
                cur -= dp[i][low_y];

            if ((low_x) >= 0 && (low_y) >= 0)
                cur += dp[low_x][low_y];

            if (cur >= stu)
                return true;
        }
    }
    return false;
}

void TC()
{
    sum = 0;
    cin >> n >> m >> stu;
    stu++;
    vector<ll> A[n];
    for (int i = 0; i < n; i++)
    {
        A[i].resize(m);
        for (int j = 0, x; j < m; j++)
        {
            cin >> A[i][j];
            sum += A[i][j];
        }
    }
    if (sum < stu)
    {
        cout << "-1\n";
        return;
    }
    vector<ll> dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            dp[i][j] = A[i][j];
            if (i == 0 and j == 0)
                continue;
            if (i == 0)
                dp[i][j] += dp[i][j - 1];
            else if (j == 0)
                dp[i][j] += dp[i - 1][j];
            else
                dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    }

    int start = 0, end = max(n, m) - 1;
    int ans = end;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (ok(A, mid, dp))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    cout << ans << nl;
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