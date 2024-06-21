#include <iostream>
#include <vector>
using namespace std;

bool odd(int n)
{
    return n % 2 == 1;
}

bool even(int n)
{
    return n % 2 == 0;
}

int solve(vector<int> &v, int n)
{
    int ops = 0;
    for(int i = 1; i < n; i++)
    {   
        if( (even(v[i]) && even(v[i - 1]) ) || (odd(v[i]) && odd(v[i - 1]) ))
        ops++;
    }
    return ops;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        cout << solve(v, n) << endl;
    }

    return 0;
}

/*
Solution:
--> If two consecutive elements has same parity, it would take one operation to make them different.
*/