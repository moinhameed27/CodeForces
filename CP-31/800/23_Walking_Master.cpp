#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > d)
            cout << -1 << endl;
        else
        {
            if (c > a + d - b)
                cout << -1 << endl;
            else
                cout << d - b + (a + d - b) - c << endl;
        }
    }
    return 0;
}

/*
---------------------------------------------------------------------------------------------------------------------------------
Initially, if we are at point a, b and we want to reach c, d with only moves of (a + 1, b + 1) & (a - 1, b)
given then following assumptions can be made:
--> We can never reach the point if b is greater than expected point d, because there's no move given where we can decrement b.
--> First reach the same height of the expected points, then move left.
--> d - b ops will be required to go to d point, and these ops will also apply to a because in the move both a and b are incremented.
--> (d - b) for d, then current position of a will be (d - b + a), now to move left we'll subtract the expected point c.
*/