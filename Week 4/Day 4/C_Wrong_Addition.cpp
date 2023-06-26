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
    ll A,B;
    string ans= "";
    cin >>A>>B;
    while(A || B)
    {
        ll a = A%10;
        A/=10;
        ll b = B%10;
        B/=10;
        if(a<=b)
            ans+= '0'+(b-a);
        else
        {
            b += (B%10)*10;
            B/=10;
            if(b-a>=10 || b-a<0)
            {
                cout << -1 << nl;
                return;
            }
            ans+= '0'+(b-a);
        }
    }
    reverse(ans.begin(),ans.end());
    cout << stoll(ans) << nl;
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
