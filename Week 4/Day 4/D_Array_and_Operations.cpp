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
    int n,k;
    cin >> n >> k;
    vector<int> A(n);
    ll sum=0;
    for(auto &i:A)
    {
        cin >> i;
        sum+=i;
    }
    sort(A.rbegin(),A.rend());
    for(int i=0,j=k,c=0; c<k; i++,j++,c++)
    {
        sum -= (A[i]+A[j]);
        sum += A[j]/A[i];
    }
    cout << sum << nl;
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
