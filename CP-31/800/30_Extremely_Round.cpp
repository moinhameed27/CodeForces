#include <iostream>
#include <vector>
using namespace std;

int solve(int n)
{
    int roundInts = 0;
    for (int i = 1; i <= n; i *= 10)
    {
        if (i < 10)
            n <= 9 ? roundInts += n : roundInts += 9;
        else if(i < 100)
        n <= 90 ? roundInts += n / 10 : roundInts += 9;
        else if(i < 1000)
        n <= 900 ? roundInts += n/ 100 : roundInts += 9;
        else if (i < 10000)
        n <= 9000 ? roundInts += n / 1000 : roundInts += 9;
        else if(i < 100000)
        n <= 90000 ? roundInts += n / 10000 : roundInts += 9;
        else
        n <= 900000 ? roundInts += n / 100000 : roundInts += 9;
    }
    return roundInts;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << solve(n) << endl;
    }

    return 0;
}

/*
Solution:
--> Max Constraint is 999,999, so Just check whether the number is less than 10, divisible by 100, 1000, 10000, 100000.
--> Running a loop till n values will take more time, so above solution is the optimal one.
*/
