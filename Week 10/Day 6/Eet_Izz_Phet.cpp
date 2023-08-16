/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;
const int md = 1e9 + 7;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

set<pair<int, int>> st;

int hashing(string a, ll base)
{
    int pos = 1;
    ll ans = 0;
    for (auto i : a)
    {
        ans = (ans + (i - 'a' + 1) * pos) % md;
        pos = (pos * base) % md;
    }
    return ans;
}

int main()
{
    FastIO;

    int n;
    cin >> n;
    while (n--)
    {
        string a;
        cin >> a;
        st.insert({hashing(a, 29), hashing(a, 31)});
    }
    int q;
    cin >> q;
    while (q--)
    {
        string a;
        cin >> a;
        if (st.find({hashing(a, 29), hashing(a, 31)}) != st.end())
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
