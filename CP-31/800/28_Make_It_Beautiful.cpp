#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> &v, int n)
{
    sort(v.begin(), v.end());
    int maxi = v[n - 1], mini = v[0];
    if (maxi == mini)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << maxi << " " << mini << " ";
        for (int i = 1; i < n - 1; i++)
            cout << v[i] << " ";
        cout << endl;
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        solve(v, n);
    }

    return 0;
}

/*
Solution:
1. Place the maximum element at first place and minimum element on the second place.
2. If both elements are same, then array can't be made beautiful.
3. Otherwise the sum of previous elements will always be greater than current element.
*/