/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef __int128 lll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;

#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define forr(x, n) for (int i = x; i < n; ++i)
#define ff first
#define ss second
#define pb push_back
#define nl '\n'
#define sp << ' ' <<
#define print_ara(x, st, ed)      \
    for (int i = st; i < ed; i++) \
        cout << x[i] << " \n"[i == ed - 1];
#define print_map(t) \
    for (auto u : t) \
        cout << u.ff << " -> " << u.ss << nl;
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const int N = (int)1e6 + 5;
const ll inf = (ll)1e18 + 5;
const int md = (int)1e9 + 7;

void TC()
{
    int n;
    ll sum = 0;
    cin >> n;
    vi a(n);
    forr(0, n) cin >> a[i], sum += a[i];
    if (sum % n)
    {
        cout << "No\n";
        return;
    }
    ll avg = sum / n;
    // cout << avg << nl;
    vi balanced(35);
    for (auto v : a)
    {
        ll lage = (avg - v);
        // cout << lage << nl;
        if (!lage)
            continue;

        // 2^x - 2^y = lage -> 2^x = 2^y + lage
        bool got = false;
        int x, y;
        for (ll i = 0; i < 33; i++)
        {
            ll cur = (1LL << i) + lage;
            if (!(cur & (cur - 1)) and cur > 0) // checking pow of 2
            {
                got = true;
                x = __builtin_ctzll(cur); // x = 2^koto
                y = i;
                // cout << x sp y << nl;
                break;
            }
        }
        if (!got)
        {
            cout << "No\n";
            return;
        }
        balanced[x]++;
        balanced[y]--;
    }
    // print_ara(balanced, 0, 5);
    if (count(all(balanced), 0) == 35)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
