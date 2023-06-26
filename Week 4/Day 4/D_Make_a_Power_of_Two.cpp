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

const ll N=2e18;

vector<string> Power;


int chk(string x, string y)
{
    int a= x.size();
    int b= y.size();
    int i=0,j=0,got=0;
    while(i<a && j<b)
    {
        if(x[i]==y[j])
        {
            got++;
            j++;
        }
        i++;
    }
    int move = (a - got) + (b - got); //remove+add
    return move;
}

void solve()
{
    string A;
    cin >> A;
    int move = 100;
    for(auto i:Power)
        move = min(move, chk(A,i));
    cout << move << nl;
}

int main()
{
    Faster;

    int t;
    for(ll i=1; i<=N; i*=2)
    {
        Power.push_back(to_string(i));
    }
    cin >>t;
    while(t--)
        solve();
//    for(auto i:Power)
//        cout << i << nl;
    return 0;
}
