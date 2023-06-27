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
    int k,n;
    cin >> k >> n;
    vector<pair<int,int>> A;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        mp[a]=i+1;
        A.push_back({b,a});
    }
    sort(A.begin(),A.end());
    ll sum=0;
    vector<int> ans;
    for(int i=0; i<2*k; i++)
    {
        sum+= A[i].first ;
        ans.push_back(A[i].second);
    }
    sort(ans.begin(),ans.end());
    cout << sum << nl;
    for(int i=0,j=2*k-1; i<k; i++,j--)
        cout << mp[ans[i]] << ' ' << mp[ans[j]] << nl;
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
