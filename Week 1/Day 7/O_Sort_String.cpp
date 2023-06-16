/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int mp[26];

int main()
{
    Faster;

    int n;
    cin >> n;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        mp[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        while (mp[i]--)
            cout << (char)('a' + i);
    return 0;
}
