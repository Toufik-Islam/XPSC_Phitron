/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    FastIO;

    int n, m, k;
    cin >> n >> m >> k;
    int A[m];
    for (int i = 0; i < m; i++)
        cin >> A[i];
    int x, ans = 0;
    cin >> x;
    for (auto &i : A)
    {
        if (__builtin_popcount(i ^ x) <= k)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
