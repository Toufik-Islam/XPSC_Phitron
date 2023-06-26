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
    vector<int> ans(n);
    ans[0]=0;
    for(int i=n; i>1; i--)
    {
        deque<int> dq;
        int idx=0;
        for(int j=0; j<i; j++)
        {
            if(A[j]==i)
            {
                ans[i-1]=j+1;
                if(j+1==i)
                    ans[i-1]=0;
                int tmp=j;
                for(j=i-1; j!=tmp; j--)
                    dq.push_front(A[j]);
                break;
            }
            else
                dq.push_back(A[j]);
        }
        int k=0;
        for(auto it:dq)
            A[k++]=it;
    }
    for(auto i:ans)
        cout << i << ' ';
    cout << nl;
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
