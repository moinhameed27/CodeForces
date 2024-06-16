#include <iostream>
using namespace std;

void solve(long long x, long long k)
{
    if (x % k != 0)
        cout << 1 << endl
             << x << endl;
    else
        cout << 2 << endl
             << 1 << " " << x - 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, k;
        cin >> x >> k;
        solve(x, k);
    }

    return 0;
}