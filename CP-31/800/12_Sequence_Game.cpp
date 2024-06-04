#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &b, int n)
{
    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < n; i++)
    {
        if (b[i] >= b[i - 1])
            a.push_back(b[i]);
        else
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }

    cout << a.size() << endl;
    for(int i : a)
        cout << i << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;

        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        solve(b, n);
        t--;
    }
    return 0;
}

/*
There can be many approaches, so going through one of them:
* The size of m should not be greater than (2 * m) so any of the answers will be accepted if they're according to the requirement.
1. Push the first element as it is.
2. In b, Check if the current element is greater than or equal to previous one then, push it in a
3. If it's small push it twice so that when doing reverse work (converting a to b), it fulfills the conditions and can be shown in the
answer.

Input:

*/