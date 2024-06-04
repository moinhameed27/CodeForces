#include <iostream>
#include <vector>
using namespace std;

int solve(string &s, int n)
{
    int countDots = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            countDots++;
    }
    return countDots;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (solve(s, n) == -1)
            cout << 2 << endl;
        else
            cout << solve(s, n) << endl;

        t--;
    }
    return 0;
}

/*
If there are consecutive three empty blocks present, answer will be 2 in all cases otherwise it will be 
equal to number of empty blocks.

Input:
5
3
...
7
##....#
7
..#.#..
4
####
10
#...#..#.#

Output:
2
2
5
0
2

*/