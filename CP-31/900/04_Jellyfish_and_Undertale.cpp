#include <iostream>
#include <vector>
using namespace std; 

long long solve(vector<int> &v, int a, int b, int n)
{
    long long sum = b;
    for(int i = 0; i < n; i++)
        sum += min(v[i], a - 1);
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        cout << solve(v, a, b, n) << endl;
    }
return 0;
}

/*
Solution:
1. The sum will start from b (initial counter of bomb).
2. If the value of v[i] is less than a, then we can increase the counter completely.
3. But if value is greater, then we can increase the counter only by a-1.
4. We do a - 1 to optimally increase the counter, as we should use that time when counter is on one second.
5. When counter goes to 0, bomb explodes, so only one second is wasted from a time.
*/