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
    int n;
    cin >> n;

    map<int, int> A;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A[x]++;
    }
    for (auto it : A)
    {
        if (it.second & 1)
        {
            cout << "Marichka\n";
            return;
        }
    }
    cout << "Zenyk\n";
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    while (t--)
        TC();

    return 0;
}
