#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll a, ll b)
{
    if(a == b)
    {
        cout << "0 0" << endl;
        return;
    }

    ll gcd = abs(a - b);
    ll minOps = min(a % gcd, gcd - a % gcd);

    cout << gcd << " " << minOps << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;

        solve(a, b);  
    }
return 0;
}

/*
Determine the maximum excitement (gcd of a and b) the fans can get and the minimum number of moves required to achieve it.
Two types of operations:
Increase both a and b by 1.
Decrease both a and b by 1.
1. After doing operations, gcd of two numbers will be the difference between them.
e.g a = 5, b = 7 ... a = 9, b = 13
    gcd = 7 - 5 = 2 (after doing add operation one time), gcd = 13 - 9 = 4 (after doing subtract operation 1 time)
2. To get the maximum excitement, we need to find the gcd of two numbers.
3. To get the minimum number of moves, we need to find the minimum of a % gcd and gcd - a % gcd.
e.g a = 26, b = 36
    gcd = 36 - 26 = 10
    minOps = min(26 % 10, 10 - 26 % 10) = min(6, 4) = 4
    So, the output will be 10 4
*/