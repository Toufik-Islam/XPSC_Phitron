/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void TC()
{
    int n, chk = -1;
    cin >> n;
    vector<int> A;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (chk != x)
            A.push_back(x);
        chk = x;
    }
    n = A.size();
    int contrast = 0;
    for (int i = 1; i < n; i++)
        contrast += abs(A[i - 1] - A[i]);
    if (contrast == 0)
    {
        cout << 1 << nl;
        return;
    }
    stack<int> st;
    st.push(A[0]);
    st.push(A[1]);
    for (int i = 2; i < n; i++)
    {
        if (st.size() > 1)
        {
            int mid = st.top();
            st.pop();
            while (st.size() > 0 && abs(st.top() - mid) + abs(mid - A[i]) == abs(st.top() - A[i]))
            {
                mid = st.top();
                st.pop();
            }
            st.push(mid);
        }
        st.push(A[i]);
    }
    cout << st.size() << nl;
}

int main()
{
    FastIO;

    int t = 1;
    cin >> t;
    while (t--)
        TC();

    return 0;
}
