/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6 + 5;
const int M = (int)1e9 + 5;
const int md = (int)1e9 + 7;

#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second
#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define pb push_back
#define nl '\n'
#define sp << ' ' <<
#define print_ara(x, st, ed)      \
    for (int i = st; i < ed; i++) \
        cout << x[i] << " \n"[i == ed - 1];
#define print_map(t) \
    for (auto u : t) \
        cout << u.ff sp u.ss << nl;
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

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

void TC()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int ans = cnt(0, n);
    if (is_sorted(A, A + n))
        cout << ans << nl;
    else
        cout << -1 << nl;
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
