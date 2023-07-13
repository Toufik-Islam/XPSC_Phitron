/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

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

int operation(vector<int> &A, int border)
{
    int n = A.size();
    int sum = 0;
    for (int i = 0; i <= border; i++)
        sum += A[i];

    int op = border;

    for (int i = border + 1; i < n;)
    {
        int j = i;
        int s = 0;
        int cnt = 0;

        while (j < n && s < sum)
        {
            s += A[j];
            cnt++;
            j++;
        }
        if (s != sum)
            return 1e9;
        i = j;
        op += (cnt - 1);
    }
    return op;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int ans = 1e9;
    for (int i = 0; i < n; i++)
        ans = min(ans, operation(A, i));

    cout << ans << nl;
}

int main()
{
    Faster;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
