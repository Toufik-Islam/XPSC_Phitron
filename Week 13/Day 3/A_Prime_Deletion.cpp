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

vector<string> prime_num;

void TC()
{
    string a;
    cin >> a;
    char c = a[0];
    for (auto v : prime_num)
    {
        if (v.size() < 2)
            continue;
        if (v[0] == v[1])
            continue;
        if (v[0] == a[0])
        {
            cout << v << nl;
            return;
        }
    }
    cout << "-1\n";
}
void sieve(long long n)
{
    vector<bool> check;
    check.resize(n + 1, true);

    for (long long i = 2; i <= n; i++)
    {
        if (check[i])
            prime_num.push_back(to_string(i));
        for (long long j = i * i; j <= n; j += i)
            check[j] = false;
    }
}
int main()
{
    FastIO;

    sieve(100);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}