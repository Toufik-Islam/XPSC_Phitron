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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    vector<bool> B(n);
    for (int i = 0, x; i < k; i++)
    {
        cin >> x;
        B[x - 1] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (!B[i])
            continue;
        int j = i + 1;
        while (j < n && B[j])
            j++;
        sort(A.begin() + i, A.begin() + j + 1);
        i = j - 1;
    }
    // for (auto i : A)
    //     cout << i << ' ';
    // cout << nl;
    if (is_sorted(A.begin(), A.end()))
        yes;
    else
        no;
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
