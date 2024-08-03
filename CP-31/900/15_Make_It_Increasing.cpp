#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

bool even(int n) { return n % 2 == 0; }
bool odd(int n) { return n % 2 != 0; }

int solve(vi &v, int n)
{
    if (n == 1)
        return 0;
    int ops = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
            continue;
        else if (v[i + 1] == 0)
            return -1;
        else
        {
            while (v[i] >= v[i + 1] && v[i] > 0)
            {
                v[i] /= 2;
                ops++;
            }
        }
    }
    return ops;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cout << solve(v, n) << endl;
    }
    return 0;
}

/*
Solution:
- We need to make the array strictly increasing.
1. Traverse from right to left.
2. If the current element is less than the next element, then continue.
3. If the current element is greater than or equal to the next element, then divide the current element by 2 until it is less than the next element.
4. If at any point next element of current is 0, return -1 because we can't reduce the element from zero and make it strictly increasing.
5. Count the number of operations.
*/