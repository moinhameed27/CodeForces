#include <iostream>
#include <vector>
using namespace std;

/*
Conditions:
1. Sum >= 0
2. Product = 1
*/


int solve(vector<int> &v, int n, int minusValues)
{
    int plusValues = n - minusValues;
    // Condition 1 is satisfied, but for overall positive value, check number of minus values
    if (minusValues <= plusValues)
    {
        if (minusValues % 2 == 0)
            return 0;
        else
            return 1;
    }
    // First check number of operations to satisfy condition 1, then check if overall sign is negative, increase one more operation
    else
    {
        int ops = ((n + 1) / 2) - plusValues;
        if ((minusValues - ops) % 2 == 0)
            return ops;
        else
            return ops + 1;
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
        int minusValues = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
                minusValues++;
        }

        cout << solve(v, n, minusValues) << endl;
    }
    return 0;
}


/*
----------------------------------------------------------------------------------------------------------------------------------
Dry Run:
v = {-1, -1, -1, -1, -1, -1, 1}, n = 7
minusValues = 6, plusValues = 1
Condition 1 is not satisfied, so we need to make operations to satisfy condition 1
ops = 4 - 1 = 3
minusValues - ops = 6 - 3 = 3, which is odd, so we add one more to satisfy condition 2
*/