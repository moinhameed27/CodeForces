#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

int solve(vi &v, int n)
{
    int ans = v[0];
    for(int i = 1; i < n; i++)
        ans &= v[i];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        cout << solve(v, n) << endl;
    }
return 0;
}

/*
Minimize the maximum value in the array using the bitwise AND operation
1. a1 & a2  <= min(a1, a2);
2. Take the bitwise AND of all the elements of the array.
3. The minimum value of the array will be the answer.
*/