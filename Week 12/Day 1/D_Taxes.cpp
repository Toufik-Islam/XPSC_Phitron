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

bool is_prime(int n)
{
    if (n == 2)
        return true;
    if (n == 1 or n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrtl(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    FastIO;

    int n;
    cin >> n;
    int ans;
    if (is_prime(n))
        ans = 1;
    else if (n % 2 == 0 or is_prime(n - 2))
        ans = 2;
    else
        ans = 3;
    cout << ans << nl;
    return 0;
}