#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    int ans = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        ans = min(ans, abs(v[i] - 0));
    }


    cout << ans << endl;
    return 0;
}

/*
For the whole product of elements to be 0, at least one element has to be 0. So the minimum number present in the
array will be the least number of operations required to make it zero. 
Edge Case : 
2, -6, 5
Here -6 is the minimum number but we need minimum operations to make a number 0 so we'll take 2 here.

Examples
Input:
3
2 -6 5
Output:
2
Input:
1
-3
Output:
3
Input:
5
0 -1 0 1 0
Output:
0
*/