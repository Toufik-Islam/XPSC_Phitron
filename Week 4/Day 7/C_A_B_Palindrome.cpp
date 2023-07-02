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

void solve()
{
    int a, b, c, d;
    cin >> a >> b;
    string A;
    cin >> A;
    c = a, d = b;
    int x = count(A.begin(), A.end(), '0');
    int y = count(A.begin(), A.end(), '1');
    a -= x, b -= y;
    for (int i = 0, j = A.size() - 1; i < j; i++, j--)
    {
        if (A[i] == '?' && A[j] == '?')
        {
            continue;
        }
        else if (A[i] == '?')
        {
            A[i] = A[j];
            A[j] == '0' ? a-- : b--;
        }
        else if (A[j] == '?')
        {
            A[j] = A[i];
            A[i] == '0' ? a-- : b--;
        }
        else if (A[i] != A[j])
        {
            cout << "-1\n";
            return;
        }
    }
    if ((A.size() & 1) && A[A.size() / 2] == '?')
    {
        if (a & 1)
        {
            A[A.size() / 2] = '0';
            a--;
        }
        else if (b & 1)
        {
            A[A.size() / 2] = '1';
            b--;
        }
        else
        {
            if (a > 0)
            {
                A[A.size() / 2] = '0';
                a--;
            }
            else if (b > 0)
            {
                A[A.size() / 2] = '1';
                b--;
            }
            else
            {
                cout << "-1\n";
                return;
            }
        }
    }
    for (int i = 0, j = A.size() - 1; i < j; i++, j--)
    {
        if (A[i] == '?' && A[j] == '?')
        {
            if (a > 1)
            {
                A[i] = '0';
                A[j] = '0';
                a -= 2;
            }
            else if (b > 1)
            {
                A[i] = '1';
                A[j] = '1';
                b -= 2;
            }
            else
            {
                cout << "-1\n";
                return;
            }
        }
    }
    x = count(A.begin(), A.end(), '0');
    y = count(A.begin(), A.end(), '1');
    if (x == c && y == d)
        cout << A << nl;
    else
        cout << "-1\n";
}

int main()
{
    Faster;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}