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
    int A[n], ans[n];
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
        ans[i]=0;
    }

//    for(auto i:A)
//        cout << i << ' ';
//    cout << nl;

    for(int i=1; i<n; i++)
    {
        int x = (A[i]&A[i-1]);
        if(x!=A[i-1])
        {
            ans[i]= ((A[i]^A[i-1])&A[i-1]);
            A[i] = (A[i]|ans[i]);
        }
    }
    for(auto i:ans)
        cout << i << ' ';
    cout << nl;
//    for(auto i:A)
//        cout << i << ' ';
//    cout << nl<<nl;
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
