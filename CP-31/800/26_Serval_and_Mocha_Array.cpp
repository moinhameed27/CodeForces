#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (__gcd(v[i], v[j]) <= 2)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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

        solve(v, n);
    }

    return 0;
}

/*
Some Properties of gcd:
* if gcd(a, b) <= 2 then gcd(a, b, c) <= 2 no matter what c is. 
We can check if there exist ai, aj (i ≠ j) such that gcd(ai,aj) ≤ 2. If so, we can move ai,aj to the front of a to make it 
beautiful, then the answer is Yes. If not, the answer is No.
*/