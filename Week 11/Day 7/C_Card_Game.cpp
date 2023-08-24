/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)100 + 5;
const int M = (int)1e9 + 5;
const int md = (int)998244353;

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

// modular arithmatic
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}

ll mod_pow(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
ll mminvprime(ll a, ll b) { return mod_pow(a, b - 2, b); }

ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}

int fact[N];
int invfact[N];
void init()
{
    fact[0] = 1;
    invfact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = mod_mul(fact[i - 1], i, md);
        invfact[i] = mod_pow(fact[i], md - 2, md);
    }
}
int getncr(int n, int r)
{
    if (n < r || n < 0 || r < 0)
    {
        return 0;
    }
    return mod_mul(fact[n], mod_mul(invfact[r], invfact[n - r], md), md);
}

ll dp1[N];
ll dp2[N];
ll dp3[N];

void TC()
{
    int n;
    cin >> n;
    cout << dp1[n] sp dp2[n] sp dp3[n] << nl;
}

void PreCalc()
{
    dp1[2] = 1;
    dp2[2] = 0;
    dp3[2] = 1;
    for (int i = 4; i <= 60; i += 2)
    {
        dp3[i] = 1;
        ll n = getncr(i, i / 2);

        ll one = getncr(i - 1, i / 2 - 1);
        one = mod_add(one, dp2[i - 2], md);

        dp1[i] = one;
        dp2[i] = mod_sub(mod_sub(n, one, md), 1, md);
    }
}

int main()
{
    FastIO;

    init();
    PreCalc();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
