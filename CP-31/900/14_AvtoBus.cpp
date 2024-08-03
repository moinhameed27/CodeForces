#include <iostream>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

bool even(ll n) { return n % 2 == 0; }
bool odd(ll n) { return n % 2 != 0; }

void solve(ll n)
{
    if(odd(n) || n < 4)
        cout << -1 << endl;
    else
    {
        // Minimum Number of Buses
        ll buses = n / 6;
        if(n % 6 != 0)
            buses++;
        cout << buses << " ";
        // Maximum Number of Buses
        buses = n / 4;
        cout << buses << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
return 0;
}

/*
Solution:
1. If n is odd or n < 4, then it is impossible to count the number of buses of 4 or 6.
2. For Minimum (Max Buses should be 6)
    - If n is divisible by 6, then the number of buses = n / 6
    - If n is not divisible by 6, then the number of buses = n / 6 + 1
    - i.e if n = 8, then 8 / 6 = 1, but we need 2 buses (4 + 4), so 8 / 6 + 1 = 2
    - i.e if n = 10, then 10 / 6 = 1, but we need 2 buses (4 + 6), so 10 / 6 + 1 = 2
3. For Maximum (Max Buses should be 4)
    - If n is divisible by 4, then the number of buses = n / 4
    - i.e if n = 8, then 8 / 4 = 2
    - i.e if n = 10, then 10 / 4 = 2, buses will be (4 + 6)
*/