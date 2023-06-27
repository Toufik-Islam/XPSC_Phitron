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
    ll n,zero=0,grp=0;
    cin >> n;
    vector<ll> A(n),B(n),pos,neg;
    for(int i=0; i<n; i++)
        cin >> A[i];
    for(int i=0; i<n; i++)
        cin >> B[i];
    for(int i=0; i<n; i++)
    {
        ll x = B[i]-A[i];
        if(x==0)
            zero++;
        else if(x<0)
            neg.push_back(-x);
        else
            pos.push_back(x);
    }
    grp+=zero/2;
    if(zero&1)
        neg.push_back(0);
    sort(neg.begin(),neg.end());
    sort(pos.begin(),pos.end());
    int i=0,j=0,x=neg.size(),y=pos.size(),got=0;
    while(i<x && j<y)
    {
        ll l =pos[j]-neg[i];
        if(l>=0)
        {
            grp++;
            i++,j++;
            got++;
        }
        else
        {
            j+=2;
            if(j>=y)
                break;
            got+=2;
            grp++;
        }
    }
    if(got<y)
        grp += (y-got)/2;
    cout << grp << nl;
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
