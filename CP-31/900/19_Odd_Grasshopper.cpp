#include <iostream>
using namespace std;

#define ll long long

bool even(int n) { return n % 2 == 0; }
bool odd(int n) { return n % 2 != 0; }

void solve(ll x, ll n)
{
    ll d;
    switch (n % 4)
    {
    case 0:
        d = 0;
        break;
    case 1:
        d = -n;
        break;
    case 2:
        d = 1;
        break;
    case 3:
        d = n + 1;
        break;
    }

    if(even(x))
        cout << x + d << endl;
    else    
        cout << x - d << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll x, n;
        cin >> x >> n;

        solve(x, n);
    }
    return 0;
}

/*
Solution:
e.g : x = 0, n = 15
1. If x is even,
0    1  2   3
_____________
0   -1  1   4
0   -5  1   8
0   -9  1   12
0   -13 1   16
    a) After every 4 steps from 0, distance is 0.
    b) After every 4 steps from 1, distance is -n.
    c) After every 4 steps from 2, distance is 1.
    d) After every 4 steps from 3, distance is n + 1.

2. If x is odd,
0   1   2    3
_____________
1   2   0   -3
1   6   0   -7
1   10  0   -11
1   14  0   -15
    a) After every 4 steps from 0, distance is 1.
    b) After every 4 steps from 1, distance is n + 1.
    c) After every 4 steps from 2, distance is 0.
    d) After every 4 steps from 3, distance is -n.
*/