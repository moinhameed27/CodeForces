#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

int solve(vi &v, int n)
{
    int left = -1, right = -1;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != 0)
        {
            // For first non zero, update both
            if (left == -1)
                left = right = i;
            // Else update only right bound
            else
                right = i;
        }
    }

    // No non Zero number in the array
    if (left == -1)
        return 0;
    else
    {
        // Check if there is any zero in the bounds of left and right
        for (int i = left; i <= right; i++)
        {
            if (v[i] == 0)
                return 2;
        }
        // Non zero numbers are together
        return 1;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vi v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        cout << solve(v, n) << endl;
    }
    return 0;
}

/*
Solution:
1. Maximum number of operations can be 2.
    a) If there is only zeros in the array, then the answer is 0.
    b) If all the non zero numbers are together, then the answer is 1.
    c) Non Zero numbers are not together, then the answer is 2.
        i. In one operation, we can turn all the numbers of array into any positive number.
        ii. In second operation, we can turn all the numbers of array into any zero.
2. Check for the bounds of left and right non zero numbers, start with left = -1, right = 1.
3. If left = -1, then no nonzero number in the array
4. Otherwise, chech if there is any zero present in the bounds of left and right, then answer is 2, else answer is 1.
*/
