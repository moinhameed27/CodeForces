#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &v, int n)
{
    int xorr = 0;
    for (int i : v)
        xorr ^= i;
    if (n % 2 == 0)
    {
        if (xorr == 0)
            return 0;
        else
            return -1;
    }
    else
        return xorr;
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
---------------------------------------------------------------------------------------------------------------------------------
1. Some basic XOR Properties:
a. a ^ a = 0
b. a ^ 0 = a
c. a ^ b ^ a = b
d. a ^ b ^ c = a ^ (b ^ c)
2. XOR of all elements in an array is zero if and only if there are even occurrences of 
each element in the array.

bi = ai ⊕ x for all 1 ≤ i ≤ n, choose such a number x that the value of the expression b1 ⊕ b2 ⊕ ... ⊕ bn equals 0?

if n = even
(a1 ⊕ x) ⊕ (a2 ⊕ x) ⊕ ... ⊕ (an ⊕ x) = (a1 ⊕ a2 ⊕ ... ⊕ an) ⊕ (x ⊕ x ... xn)
--> Xor of x will always be zero as they are present even number of times, so pair of x will cancel each other.
--> So independent of x, if xor all elements is 0, then it is possible that final answer will be zero, otherwise not possible

if n = odd
--> x will not cancel each other, so if xor of all elements is equal to x then whole equation (ai ⊕ x) can be zero.
*/