#include <iostream>
using namespace std;

void solve(long long n, long long k, long long x)
{
    long long low = (k * (k + 1)) / 2;
    long long high = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
    if (x >= low && x <= high)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        solve(n, k, x);
    }
    return 0;
}

/*
Solution:
1. Find the lower bound of the sum of the first k natural numbers.
2. Find the upper bound of the sum of the first n natural numbers minus the sum of the first n-k natural numbers.
3. The sum of the first k natural numbers is k * ( k + 1 ) / 2.
4. The sum of the first n natural numbers is n * ( n + 1 ) / 2.
5. The sum of the first n-k natural numbers is (n - k) * ( n - k +  1 ) / 2.
6. If x is between the lower bound and the upper bound, print "YES", otherwise print "NO".

Additional Information:
1. We can also find the lower and upper bound by adding the first and last k numbers respectively in a loop
   but above method is more efficient.
*/