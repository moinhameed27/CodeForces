#include <iostream>
using namespace std;
#define ull unsigned long long int

ull solve(ull n)
{
    ull ans;
    for(int i = 1; ; i++)
    {
        if(n % i != 0)
        {
            ans = i - 1;
            break;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ull n;
        cin >> n;
        cout << solve(n) << endl;
    }
    
return 0;
}

/*
Solution:
1. For odd number, the interval cannot be greater than 1.
2. So generally, if a number is divisible by 4, 8, 16, then surely it will be divisible by 2.
3. Continuing from above point, if a number is divisible by 9, 27, 81, then surely it will be divisible by 3.
4. So we need to find the first x number which does not divide n.
Examples:
1. If number is not divisible by 2, then surely it won't be divisible by 4, 8, 16.
2. If a number is not divisible by 3, then surely it won't be divisible by 9, 27, 81. 
*/