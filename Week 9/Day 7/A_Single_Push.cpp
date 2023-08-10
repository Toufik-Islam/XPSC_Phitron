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
    int n, k = 0;
    bool problem = false, solved = false;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    vector<int> B(n);
    for (int i = 0; i < n; i++)
        cin >> B[i];

    for (int i = 0; i < n; i++)
    {
        if ((A[i] > B[i]) || (solved && A[i] != B[i]))
        {
            no;
            return;
        }
        if (!problem && A[i] == B[i])
            continue;

        if (!problem && A[i] < B[i])
        {
            k = B[i] - A[i];
            problem = true;
        }
        if (problem && A[i] == B[i])
        {
            solved = true;
        }
        if (problem && !solved && A[i] + k != B[i])
        {
            no;
            return;
        }
    }
    yes;
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