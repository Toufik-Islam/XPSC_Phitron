#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << (abs(x - y) % 2 == 0 ? "YES\n" : "NO\n");
    }
    return 0;
}
