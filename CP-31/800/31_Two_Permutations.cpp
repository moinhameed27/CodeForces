#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int a, int b)
{
    if (a + b >= n - 1)
    {
        if (a == n && b == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        solve(n, a, b);
    }

    return 0;
}

/*
Solution:
1. If a + b >= n - 1 : in this case if a and b both are of n size then the whole array will be a permutation and the answer can be YES,
otherwise all array will be a permutation (prefix will be whole array and suffix will also be whole array) and we won't be able to get
a prefix size and b suffix size.
2. If a + b < n, then we can always make a permutation that prefix length is a and suffix length is 2.
e.g
n = 5, a = 2, b = 2
prefix = [1, 2], suffix = [4, 5], remaining = [3] which will come between them and in this case, whole array will be prefix and suffix
n = 5, a = 1, b = 2
prefix = [1], suffix = [4, 5], remaining = [2, 3] --> permutation1 = [1, 2, 3, 4, 5], permutation2 = [1, 3, 2, 4, 5]
*/
