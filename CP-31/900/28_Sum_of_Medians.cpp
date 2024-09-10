#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

ll solve(vi &v, int n, int k)
{
    int idx = n * k, mid = n / 2 + 1;
    ll sum = 0;
    while (k--)
    {
        idx -= mid;
        sum += v[idx];
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vi v(n * k);
        for (int i = 0; i < n * k; i++)
            cin >> v[i];

        cout << solve(v, n, k) << endl;
    }
    return 0;
}

/*
Solution:
1. Find the medians from end of the array to get the maximum sum.
2. Get the middle and after elements from the end and starting elements from the start.
3. Repeat the process for k times.

--> Example:
4 3
2 4 16 18 21 27 36 53 82 91 92 95
Output: 145 (91 + 36 + 18)
Arrays : {2, 91, 92, 95}, {4, 36, 53, 82}, {16, 18, 21, 27}
Mid = 2 : Every mid element from the end of the array will be chosen.
*/