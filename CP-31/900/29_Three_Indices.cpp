#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

void solve(vi &v, int n)
{
    int mini = 23, maxi = -23;
    for(int i = 1; i < n - 1; i++)
    {
        if(v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        solve(v, n);
    }
return 0;
}

/*
Solution:
1. Find the first element which is greater than both its neighbours.
2. As the array is a permutaion, all elements will be distinct.
3. Either there will be increasing or decreasing sequence or both, just find the element which is greater than it's neighbours.

--> Other Approaches:
1. Brute Force: O(n^2)
    i) For every i from 1 to n - 2, check minimum element on left side and maximum element on right side.
    ii) If it exists, print the indices otherwise print "NO".
2. Optimized Approach: O(n)
    i) Use the prefix and suffix arrays to store the minimum and maximum elements from left and right side respectively.
    ii) For every i from 1 to n - 2, check if the element is greater than the minimum element on left side and maximum element on right side.
*/