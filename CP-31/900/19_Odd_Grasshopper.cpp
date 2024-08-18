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