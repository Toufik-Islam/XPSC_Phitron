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
    int n;
    cin >> n;
    int A[n];
    for(auto &i:A)
        cin >> i;
    string s;
    cin >> s;
    vector<int> r,b;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='R')
            r.push_back(A[i]);
        else
            b.push_back(A[i]);
    }
    int p=1;
    sort(r.begin(),r.end());
    sort(b.begin(),b.end());
    for(int i=0; i<b.size(); i++,p++)
    {
        if(b[i]<p)
        {
            no;
            return;
        }
    }
    for(int i=0; i<r.size(); i++,p++)
    {
        if(r[i]>p)
        {
            no;
            return;
        }
    }
    yes;
}

int main()
{
    Faster;

    int t;
    cin >>t;
    while(t--)
        solve();

    return 0;
}
