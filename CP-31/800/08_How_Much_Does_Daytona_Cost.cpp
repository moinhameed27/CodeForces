#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;

        bool ans = false;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == k)
                ans = true;
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        t--;
    }
    return 0;
}

/*
We have to check for the non-empty subarray according to constraints, so if k element is present
in the array, there will always be a subarray where k will be the most common element.

Input:
7
5 4
1 4 3 4 1
4 1
2 3 4 4
5 6
43 5 60 4 2
2 5
1 5
4 1
5 3 3 1
1 3
3
5 3
3 4 1 5 5

Output:
YES
NO
NO
YES
YES
YES
YES
*/