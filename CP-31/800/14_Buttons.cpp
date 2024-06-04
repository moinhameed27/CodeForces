#include <iostream>
using namespace std;

void solve(long long a, long long b, long long c)
{
    if(c % 2 == 1)
        a >= b ? cout << "First" << endl : cout << "Second" << endl;
    else
        b >= a ? cout << "Second" << endl : cout << "First" << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}

/*
All Cases:
--> C is odd
A is greater than B
A is less than B
--> C is Even
A is greater than B
A is less than B
*/
