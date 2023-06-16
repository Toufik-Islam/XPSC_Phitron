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

void solve()
{
    string A, w = "";
    getline(cin, A);
    int c = 0;
    vector<string> words;
    while (A[c] != '\0')
    {
        if (A[c] == ' ')
        {
            words.push_back(w);
            w = "";
        }
        else
            w += A[c];
        c++;
    }
    words.push_back(w);
    for (int i = 0; i < words.size(); i++)
    {
        reverse(words[i].begin(), words[i].end());
        cout << words[i] << " \n"[i == words.size() - 1];
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
