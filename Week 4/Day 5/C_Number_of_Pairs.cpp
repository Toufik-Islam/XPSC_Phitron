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
    int n,l,r;
    cin >> n >> l >> r;
    int A[n];
    for(int i=0; i<n; i++)
        cin >> A[i];

    sort(A,A+n);
    ll ans = 0;
    for(int i=0; i<n && A[i]<=r; i++)
    {
        auto mn= lower_bound(A+i+1,A+n,l-A[i]);
        auto mx= upper_bound(A+i+1,A+n,r-A[i]);
        ans += (mx-mn);
    }
    cout << ans << nl;
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
