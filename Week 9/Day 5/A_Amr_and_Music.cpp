/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> A(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
        cin >> A[i].first, A[i].second = i + 1;
    sort(A.begin(), A.end());
    for (auto i : A)
    {
        if (k - i.first < 0)
            break;
        ans.push_back(i.second);
        k -= i.first;
    }
    cout << ans.size() << nl;
    for (auto i : ans)
        cout << i << ' ';
}

int main()
{
    FastIO;

    int t = 1;
    // cin >> t;
    while (t--)
        TC();

    return 0;
}
