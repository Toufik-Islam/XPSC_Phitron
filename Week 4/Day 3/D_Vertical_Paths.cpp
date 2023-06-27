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

const int N = 2e5+3;
int n;
int parent[N];
vector<int> child;
vector<int> Adj[N];
bool visited[N];

void init()
{
    for(int i=0; i<=n; i++)
    {
        Adj[i].clear();
        visited[i]=false;
    }
    child.clear();
}

void solve()
{
    cin >> n;
    init();
    for(int i=1,x; i<=n; i++)
    {
        cin >> x;
        Adj[x].push_back(i);
        parent[i]=x;
    }
    for(int i=1; i<=n; i++)
    {
        if(Adj[i].size()==0)
            child.push_back(i);
    }
    if(child.empty())
        child.push_back(1);

    cout << child.size() << nl;

    stack<int> st;
    for(auto i:child)
    {
        int tmp=i;
        while(!visited[tmp])
        {
            st.push(tmp);
            visited[tmp]=true;
            tmp=parent[tmp];
        }
        cout << st.size() << nl;
        while(st.size())
        {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << nl;
    }
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
