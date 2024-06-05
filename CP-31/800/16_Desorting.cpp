#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        int diff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i > 0)
                diff = min(diff, v[i] - v[i - 1]);
        }
        diff < 0 ? cout << 0 << endl : cout << (diff / 2 + 1) << endl;
    }

    return 0;
}

/*
Find the minimum difference between numbers. If at any instance, difference becomes negative it means that array is already sorted, return 0.
Else you'll get the minimum difference. At the end, Divide difference by 2 and add 1 to get the answer.
*/