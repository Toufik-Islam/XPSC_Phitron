/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const int N = 1e5 + 3;
int x1, y_1, x2, y_2;
map<int, int> row, col;
set<int> str, stc;

void chk()
{
    if (x1 > x2)
        swap(x1, x2);
    if (y_1 > y_2)
        swap(y_1, y_2);

    auto lox = str.lower_bound(x1);
    auto loy = stc.lower_bound(y_1);
    // cout << i << "   " << j << nl;
    if (*lox > x2 || *loy > y_2)
        yes;
    else
        no;
}

void solve()
{
    int n, q, x, r, c;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        stc.insert(i);
        str.insert(i);
    }
    str.insert(INT_MAX);
    stc.insert(INT_MAX);
    while (q--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> r >> c;
            row[r]++;
            col[c]++;
            if (row[r] == 1)
                str.erase(r);
            if (col[c] == 1)
                stc.erase(c);
        }
        else if (x == 2)
        {
            cin >> r >> c;
            row[r]--;
            col[c]--;
            if (row[r] == 0)
                str.insert(r);
            if (col[c] == 0)
                stc.insert(c);
        }
        else
        {
            cin >> x1 >> y_1 >> x2 >> y_2;
            chk();
        }
    }
}

int main()
{
    Faster;

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
