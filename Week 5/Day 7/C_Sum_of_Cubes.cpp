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

const ll N = 1e14;

vector<ll> cube;

void solve()
{
    ll n;
    cin >> n;

    for (int i = 0, j = cube.size() - 1; i <= j;)
    {
        if (cube[i] + cube[j] == n)
        {
            yes;
            return;
        }
        (cube[i] + cube[j] < n) ? i++ : j--;
    }
    no;
}

int main()
{
    Faster;

    for (ll i = 1; i * i * i < N; i++)
        cube.push_back(i * i * i);

    int t = 1;
    // for (auto i : cube)
    //     cout << i << nl;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
