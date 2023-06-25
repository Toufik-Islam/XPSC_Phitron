
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
    vector<int> A(n);
    for(int i=0; i<n; i++)
        cin >> A[i];
    for(int i=n-1; i>0; i-=2)
        swap(A[i],A[i-1]);
    for(int i=1; i<n; i++)
    {
        if(A[i]<A[i-1])
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
