#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    while(t--)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;

        cout << 1 << " " << 1 << " " << n << " " << m << endl;
    }
return 0;
}

/*
Place two Yo yos at places where anton has to travel the maximum in the grid.
Solution:
1. Opposite corners of the grid will have the maximum distance between them.
2. Place yo yos at any of opposite corners of the grid, no matter where anton is standing distance will be maximum.
3. Maximum distance will be 2 * (n - 1) + 2 * (m - 1). [Two Horizontal and two vertical rounds]
*/