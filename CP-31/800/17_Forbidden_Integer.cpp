#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k, int x)
{
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else
    {
        if (k == 1)
            cout << "NO" << endl;
        else if (n == k)
        {
            cout << "YES" << endl;
            cout << 1 << endl;
            cout << n << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "YES" << endl;
            int d = n / 2;
            cout << d << endl;
            for (int i = 0; i < d; i++)
                cout << 2 << " ";
            cout << endl;
        }
        else
        {
            if (k == 2)
                cout << "NO" << endl;
            else
            {
                int d = n / 2 - 1;
                cout << "YES" << endl;
                cout << d + 1 << endl;
                for(int i = 0; i < d; i++)
                    cout << 2 << " ";
                cout << 3 << endl;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        solve(n, k, x);
    }

    return 0;
}

/*
Amount of cases to check for:
1. If x != 1, then the answer is always YES, so print n times 1
2. Else cases where x = 1
a) If k is also 1, print NO
b) If n == k, print YES and print n as there will be only one element to print.
c) If n is even, print YES and n / 2 times 2
d) If n is odd:
i. k = 2, then print NO
ii. For every other case, print YES and for printing numbers print n / 2 - 1 times 2 and print 1 time 3

e.g
n = 7, k = 3, x = 1
Print 2 times (n / 2 - 1) 2 and print one time 3
*/