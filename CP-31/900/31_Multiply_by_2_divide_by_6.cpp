#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int countTwos = 0, countThrees = 0;
    while(n % 2 == 0)
    {
        n /= 2;
        countTwos++;
    }
    while(n % 3 == 0)
    {
        n /= 3;
        countThrees++;
    }
    if(n != 1 || countTwos > countThrees)
        return -1;
    else
        return countThrees + (countThrees - countTwos);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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
* We need to find the minimum number of operations to convert n to 1.
* We can multiply n by 2 or divide n by 6.
Solution:
1. We need to find the number of 2's and 3's in the prime factorization of n.
2. If n is not divisible by 2 or 3, then it is not possible to convert n to 1.
3. If n is divisible by 2 or 3, it means we can write them as 2^a * 3^b.
4. Dividing by 6 means 2 ^ (a - 1) * 3 ^ (b - 1).
5. Multiplying by 2 means 2 ^ (a + 1) * 3 ^ b.
6. If a > b, then we can't convert n to 1 because after doing all the operations we will be left with 2 ^ a * 3 ^ 0.
7. If a <= b, then we can convert n to 1 by doing (b - a) + b operations (b - a to match them and b to finally make them 1).

Example:
a = 4, b = 5
* Multiply by 2 => a = 5, b = 5 (1 operation)
* Divide by 6 (b operations)

a = 4, b = 4
* Divide by 6 (b operations)

a = 5, b = 4
* Divide by 6 b times, there will always be one 2 left which can't be converted to 1.
*/