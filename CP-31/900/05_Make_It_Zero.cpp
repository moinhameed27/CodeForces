#include <iostream>
#include <vector>
using namespace std;

bool odd(int n) { return n%2; }
bool even(int n) { return !odd(n); }

void solve(int n)
{
    if(even(n))
    {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        cout << 4 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << n - 1 << " " << n << endl;
        cout << n - 1 << " " << n << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        solve(n);
    }
    
return 0;
}

/*
Solution;
1. Xor of same elements is zero.
2. We are given 2 operations;
    a. Choose any subsequence and xor all elements
    b. Replace all the elements of subsequence of with their xor.
3. If n is even, we can make it zero by applying operation a on the whole array and then applying operation b on the whole array (Total 2 operations).
4. If n is odd, we can make it zero by applying operation a on n-1 elements and then applying operation b on n-1 elements and then 
applying operation a and b on last 2 elements. (Total 4 operations)
*/