#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(vector<int> &v, int n, int k)
{
    sort(v.begin(), v.end());
    int ans = 1, count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) <= k)
            count++;
        else
            count = 1;
        ans = max(ans, count);
    }
    return n - ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cout << solve(v, n, k) << endl;
    }

    return 0;
}

/*
Solution:
1. Sort the array.
2. Find the problems we can keep i.e largest subsequence such that their difference of adjacent elements is less than or equal to k.
3. Now the problems we have to remove is n - problems we can keep.
*/