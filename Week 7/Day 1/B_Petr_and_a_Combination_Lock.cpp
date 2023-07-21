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

vector<int> A;
int n, sum = 0;
bool ok;

void solve(int i, int s)
{
    if (i == n)
    {
        (sum - 2 * s) % 360 == 0 ? ok = true : ok;
        return;
    }
    solve(i + 1, s);
    solve(i + 1, s + A[i]);
}

int main()
{
    FastIO;

    cin >> n;
    A.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    solve(0, 0);
    cout << (ok ? "YES\n" : "NO\n");
    return 0;
}
