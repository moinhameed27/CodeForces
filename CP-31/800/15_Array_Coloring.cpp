#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t)
    {
        cin >> n;
        vector<int> v(n);
        int oddNumbers = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 1)
                oddNumbers++;
        }

        oddNumbers % 2 == 0 ? cout << "YES" << endl : cout << "NO" << endl;

        t--;
    }

    return 0;
}

/*
If odd numbers are in even count, then it is possible to color the array in two colors
in such a way that the sums of the elements of both colors have the same parity.
*/