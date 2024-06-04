#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;

        vector<int> v(n - 1);
        long long sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        
        cout << -(sum) << endl;

        t--;
    }
    return 0;
}

/*
The sum of all efficiency of teams is equal to zero. If one team's efficiency increases by 1 then it means
that it's opposite team's efficiency decreases by 1. So if efficiency of n - 1 teams are given, efficiency
of last team can be found by adding all and changing the sign, making overall efficiency as 0.

Input:
2
4
3 -4 5
11
-30 12 -57 7 0 -81 -68 41 -89 0

Output:
-4
265

*/