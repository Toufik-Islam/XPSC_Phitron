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
    string A, B = "", C = "meow";
    cin >> n >> A;

    for (int i = 0; i < n; i++)
        A[i] = tolower(A[i]);

    B += A[0];

    for (int i = 1; i < n; i++)
        if (A[i] != A[i - 1])
            B += A[i];
    B == C ? yes : no;
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
