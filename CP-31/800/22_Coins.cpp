#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (n % 2 == 0)
            cout << "YES" << endl;
        else
        {
            if (k % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}

/*
---------------------------------------------------------------------------------------------------------------------------------
If n is even, whatever k is given, we can add them to make n
2x + ky = n
If n is odd, we can only make odd n when k is odd otherwise if k is even numbers will always be evemm.
*/