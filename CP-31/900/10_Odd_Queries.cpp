#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void solve(vector<ll> &prfixSum, ll n, ll l, ll r, ll k)
{
    ll sumBeforeL, sumAfterR;
    sumBeforeL = prfixSum[l - 1];
    sumAfterR = prfixSum[n] - prfixSum[r];
    ll newSum = sumBeforeL + sumAfterR + k * (r - l + 1);
    if(newSum % 2 == 1)
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
        ll n, q;
        cin >> n >> q;
        vector<int> v(n + 1);
        vector<ll> prefixSum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            prefixSum[i] = prefixSum[i - 1] + v[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            solve(prefixSum, n, l, r, k);
        }
    }
    return 0;
}

/*
Solution:
1. Calculate the prefix sum of the array.
2. For each query, calculate the sum of elements before l, sum of elements after r and the sum of elements between l and r.
3. Add the sum of elements before l, sum of elements after r and k * (r - l + 1).
4. If the new sum is odd, print "YES" else print "NO".
*/
