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

int n;
vector<int> A;
vector<int> ans;

void build_tree(int l, int r, int d)
{
    if (l > r)
        return;
    if (l == r)
    {
        ans[l] = d;
        return;
    }
    int mx = l;
    for (int i = l; i <= r; i++)
    {
        if (A[mx] < A[i])
            mx = i;
    }
    ans[mx] = d;
    build_tree(l, mx - 1, d + 1);
    build_tree(mx + 1, r, d + 1);
}

void solve()
{
    cin >> n;
    A.resize(n);
    ans.resize(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    build_tree(0, n - 1, 0);
    for (auto i : ans)
        cout << i << ' ';
    cout << nl;
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