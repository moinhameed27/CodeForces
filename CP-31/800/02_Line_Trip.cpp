#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> vc, int n, int x)
{
    int prev = 0, maxLiters = 0;
    for (size_t i = 0; i < n; i++)
    {
        maxLiters = max(maxLiters, vc[i] - prev);
        prev = vc[i];
    }
    return max(maxLiters, 2 * (x - vc[n - 1]));
}

int main()
{
    int testCases;
    cin >> testCases;
    for (size_t i = 0; i < testCases; i++)
    {
        int n, x;
        cin >> n >> x;
        vector<int> vc(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> vc[i];
        }

        cout << solve(vc, n, x) << endl;
    }

    return 0;
}

/*
1. Check for all the distances, and find the maximum distance between all the points
2. As there are no petrol pumps on point x, so going there and returning from there will need extra fuel, so compare it with max fuel

Input:
3
3 7
1 2 5
3 6
1 2 5
1 10
7


Outputs:
4
3
7
*/