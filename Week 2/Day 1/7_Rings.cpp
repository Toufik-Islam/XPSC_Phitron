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
        cout << ((x * y <= 99999 && x * y >= 10000) ? "YES\n" : "NO\n");
    }
    return 0;
}
