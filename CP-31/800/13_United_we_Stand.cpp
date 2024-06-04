#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<int> &v, int n)
{
    sort(v.begin(), v.end());
    if (v[0] == v.back())
        cout << "-1" << endl;
    else
    {
        int idx = 0;
        while (v[idx] == v[0])
            idx++;
        cout << idx << " " << n - idx << endl;
        for (int i = 0; i < idx; i++)
            cout << v[i] << " ";
        cout << endl;
        for (int i = idx; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        solve(v, n);

        t--;
    }

    return 0;
}

/*
Approach:
1. Sort the array.
2. Give the minimum + same elements to the first array and the rest to the second array.
3. Larger elements can never be the divisor of bigger elements.
*/