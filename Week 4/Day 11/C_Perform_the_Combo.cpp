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
    string x;
    cin >> n >> k >> x;

    vector<int> m(n);
    vector<int> A(26);
    // for (auto i : x)
    //     A[i - 'a']++;
    m[n - 1] = 1;
    while (k--)
    {
        int a;
        cin >> a;
        a--;
        m[a]++;
    }
    for (int i = n - 2; i >= 0; i--)
        m[i] += m[i + 1];

    for (int i = 0; i < n; i++)
        A[x[i] - 'a'] += m[i];

    for (auto i : A)
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
