/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll N = (ll)1e6 + 5;
const int M = (int)1e9 + 5;
const int md = (int)1e9 + 7;

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

set<long long> prime_num;
void sieve(long long n)
{
    vector<bool> check;
    check.resize(n + 1, true);

    for (long long i = 2; i <= n; i++)
    {
        if (check[i])
            prime_num.insert(i * i);
        for (long long j = i * i; j <= n; j += i)
            check[j] = false;
    }
}

void TC()
{
    ll n;
    cin >> n;
    if (prime_num.find(n) != prime_num.end())
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    FastIO;

    sieve(N);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}