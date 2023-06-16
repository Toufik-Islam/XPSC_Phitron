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
void print(int i, int j)
{
    if (i == 0)
        return;
    print(i - 1, j + 1);
    while (j--)
        cout << ' ';
    for (int k = 1; k < 2 * i; k++)
        cout << '*';
    cout << nl;
}
void print1(int i, int j)
{
    if (i == 0)
        return;
    int x = j;
    while (x--)
        cout << ' ';

    for (int k = 1; k < 2 * i; k++)
        cout << '*';
    cout << nl;
    print1(i - 1, j + 1);
}
int main()
{
    Faster;

    cin >> n;
    print(n, 0);
    print1(n, 0);
    return 0;
}
