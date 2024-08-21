#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll totalSum = 0, singleSum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            totalSum += v[i];
            ll div = ceil((double)v[i] / x);
            singleSum += div;
        }

        totalSum = ceil((double)totalSum / x);

        cout << min(totalSum, singleSum) << " " << max(totalSum, singleSum) << endl;
    }

    return 0;
}

/*
Solution:
1. Take the total sum of the array and divide it by x and take the ceil value of it.
2. Individually divide the elements of the array by x and take the ceil value of it and add them.
3. Print the minimum and maximum of the two values.
*/