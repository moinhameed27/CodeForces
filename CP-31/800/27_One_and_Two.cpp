#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int> &v, int n)
{
    int rightCount = count(v.begin(), v.end(), 2);
    int leftCount = 0;
    for (int k = 0; k < n; k++)
    {
        if (v[k] == 2)
            leftCount++, rightCount--;
        if(leftCount == rightCount)
            return k + 1;
    }

    return -1;
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
1. Going for the n2 solution and checking for every k after multiplying will give the integer overflow even with the long long variables.
2. Instead use the left and right count for the number of 2.
3. Number of 1's won't change our multiplication, so count the number of 2's.
4. Start with leftCount as 0 and rightCount as total number of 2's.
5. If 2 is found in the array, increase the leftCount and decrease the rightCount.
6. The index k where both the counts will be same is the smallest index where both sides of k will have same answer of multiplication.
*/