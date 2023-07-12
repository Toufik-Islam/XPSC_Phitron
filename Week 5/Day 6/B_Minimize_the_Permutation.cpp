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
    int n;
    cin >> n;
    vector<bool> chk(n, true);
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    bool done = true;
    while (done)
    {

        for (int i = n - 2; i >= 0; i--)
        {
            if (chk[i] && A[i] > A[i + 1])
            {
                swap(A[i], A[i + 1]);
                chk[i] = false;
                done = false;
            }
        }
        if (done)
            break;
        done = true;
    }
    // for (int i = 0; i < n; i++)
    //     cout << chk[i] << " \n"[i == n - 1];
    for (int i = 0; i < n; i++)
        cout << A[i] << " \n"[i == n - 1];
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
