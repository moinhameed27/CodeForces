#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> v,int n)
{
    if(v[0] == 1)
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;   
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        solve(v, n);

        t--;
    }
    return 0;
}

/*
If the first element is 1, then the array can be sorted by doing the operations given, otherwise there is no
chance that array can be sorted.

Input:
6
3
1 2 3
5
1 3 2 5 4
5
5 4 3 2 1
3
3 1 2
4
2 3 1 4
5
5 1 2 3 4

Output:
YES
YES
NO
NO
NO
NO
*/