#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(vector<int> &nums, int n, int k)
{
    if (k == 1)
    {
        if (is_sorted(nums.begin(), nums.end()))
            return true;
        return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, x;
        cin >> n >> x;
        vector<int> nums(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        if (solve(nums, n, x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        t--;
    }

    return 0;
}

/*
1. If the number of swaps are 1, return true if array is already sorted otherwise no
2. In case of swaps >= 1, array can be sorted by doing operations

Input:
5
3 2
1 2 3
3 1
9 9 9
4 4
6 4 2 1
4 3
10 3 830 14
2 1
3 1

Outputs:
YES
YES
YES
YES
NO
*/