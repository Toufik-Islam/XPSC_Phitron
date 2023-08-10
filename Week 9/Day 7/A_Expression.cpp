#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    cout << max({a + b + c, a + b * c, a * (b + c), a * b * c, (a + b) * c}) << endl;
    return 0;
}