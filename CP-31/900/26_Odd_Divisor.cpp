#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        
        if(n & (n - 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;   
    }
return 0;
}

/*
Tell if the number has an odd divisor (Other than 1) or not 
Solution:
1. If number is power of two then it won't have an odd divisor
2. If n & (n - 1) returns 0 then the number is power of two and vice versa.
*/