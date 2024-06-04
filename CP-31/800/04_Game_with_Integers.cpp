#include <iostream>
#include <vector>
using namespace std;

void solve(int n)
{
    n %= 3;
    if(n == 1 || n == 2)
    cout << "First" << endl;
    else 
    cout << "Second" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;

        solve(n);

        t--;
    }
    return 0;
}

/*
Take remainder of the number with 3.
1. If r = 1, Vanya can subtract 1 and win
2. If r = 2, Vanya can add 1 and win
3. If 3 = 3, Vanya can't win in any number of operations

Input:
6
1
3
5
100
999
1000

Output:
First
Second
First
First
Second
First
*/