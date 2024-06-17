#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &v, int n)
{
    int space = 0, maxSpace = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            space++;
        else
            space = 0;
        maxSpace = max(maxSpace, space);
    }
    return maxSpace;
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

        cout << solve(v, n) << endl;
    }

    return 0;
}
