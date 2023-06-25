
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
    string A;
    cin >> A;
    int n= A.size();
    int sz = 26;
    int xtra=0;
    vector<bool> f(sz,false);
    for(int i=0; i<n; i++)
    {
        if(f[A[i]-'a'])
        {
            xtra+=2;
            for(int j=0; j<sz; j++)
                f[j]=false;
        }
        else
            f[A[i]-'a']=true;
    }
    cout << n - xtra<<nl;

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
