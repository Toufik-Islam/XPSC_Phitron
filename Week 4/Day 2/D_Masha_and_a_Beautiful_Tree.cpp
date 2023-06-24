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

const int N = 3e5;
int A[N];

int cnt(int left, int right)
{
    if (right - left == 1)
        return 0;
    int mid = (left + right) / 2;
    int ans = 0, mx_left = -1, mx_right = -1;
    for (int i = left; i < mid; i++)
        mx_left = max(mx_left, A[i]);
    for (int i = mid; i < right; i++)
        mx_right = max(mx_right, A[i]);

    if (mx_left > mx_right)
    {
        ans++;
        for (int i = 0; i < mid - left; i++)
            swap(A[left + i], A[mid + i]);
    }
    return ans + cnt(left, mid) + cnt(mid, right);
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int ans = cnt(0, n);
    for (int i = 1; i < n; i++)
    {
        if (A[i - 1] > A[i])
        {
            cout << -1 << nl;
            return;
        }
    }
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