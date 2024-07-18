#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int solve(vector<int> &v)
{
    int n = v.size(), gcd = 0;
    for(int i = 1; i <= n; i++)
    {
        int diff = abs(v[i-1] - i);
        gcd = __gcd(diff, gcd);
    }
    return gcd;
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
        cout << solve(v) << endl;
    }

    return 0;
}

/*
Solution:
1. In order to move pi to position i, it is easy to see that |pi−i| has to be divisible by k.
2. So, |p1−1|,|p2−2|,…,|pn−n| has to be all divisible by k. 
3. The largest possible value of k turns out to be the greatest common divisor of integers |p1−1|,|p2−2|,…,|pn−n|.
Examples:
1. Array :   4 7 3 6 2 1 5
Sorted :     1 2 3 4 5 6 7
Differences: 3 5 0 2 3 5 2

We need to find the maximum value of k so that we can sort any two indices i and j with |i−j| = k.
Here in this example, the maximum value of k is 1.
If we take any other value than k = 1, we can't sort the array.
Conclusion: k should be divisible by all the differences.
*/