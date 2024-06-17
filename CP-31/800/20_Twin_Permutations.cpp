#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
        cout << n - a[i] + 1 << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
            
        solve(a, n);
    }

    return 0;
}

/*
---------------------------------------------------------------------------------------------------------------------------------
Simplify the Permutation:
Condition given as a1 + b1 <= a2 + b2...
Take it only as a1 + b1 = a2 + b2

--> In the permutation, max element is n, so if we subtract any element from n and add 1, then 
all the sum of a1 + b1 ... an + bn will be equal


a[5] = {1, 2, 4, 5, 3}
b[5] = {5 - 1 + 1 (5), 5 - 2 + 1 (4), 5 - 4 + 1 (2), 5 - 5 + 1 (1), 5 - 3 + 1 (3)}
b[5] = {5, 4, 2, 1, 3}
Sum of a and b
a[i] + b [i] = {6, 6, 6, 6, 6}
*/