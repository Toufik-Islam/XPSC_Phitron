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

int n;
vector<int> A;
vector<int> lvl;

int find_lvl(int stdd, int nowid, int toid, int step)
{
    if (stdd == toid)
        return lvl[nowid] = step;
    return lvl[nowid] = find_lvl(stdd, toid, A[toid], step + 1);
}

void solve()
{
    cin >> n;
    A.resize(n + 1);
    lvl.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        lvl[i] = -1;
    }
    for (int i = 1; i <= n; i++)
        if (lvl[i] == -1)
            find_lvl(i, i, A[i], 1);
    for (int i = 1; i <= n; i++)
        cout << lvl[i] << " \n"[i == n];
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
