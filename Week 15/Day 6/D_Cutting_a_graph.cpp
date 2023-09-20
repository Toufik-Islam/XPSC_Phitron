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

const int N = 50005;
int parent[N];
int Rank[N];

int Find(int x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = Find(parent[x]);
}

void Union(int a, int b)
{
    int x = Find(a);
    int y = Find(b);
    if (x != y)
    {
        if (Rank[x] < Rank[y])
            parent[x] = y, Rank[y]++;
        else
            parent[y] = x, Rank[x]++;
    }
}

bool Friend(int a, int b)
{
    return Find(a) == Find(b);
}

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    for (int i = 0, a, b; i < m; i++)
        cin >> a >> b;
    map<int, tuple<string, int, int>> tpl;
    for (int i = q, a, b; i > 0; i--)
    {
        string s;
        cin >> s >> a >> b;
        tpl[i] = make_tuple(s, a, b);
    }
    stack<string> ans;

    for (auto it : tpl)
    {
        string s;
        int a, b;
        tie(s, a, b) = it.second;

        if (s == "ask")
        {
            if (Friend(a, b))
                ans.push("YES\n");
            else
                ans.push("NO\n");
        }
        else
            Union(a, b);
    }

    while (ans.size())
    {
        cout << ans.top();
        ans.pop();
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
