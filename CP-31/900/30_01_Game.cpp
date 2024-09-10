#include <bits/stdc++.h>
using namespace std;

bool even(int n) { return n % 2 == 0; }
bool odd(int n) { return n % 2 != 0; }

void solve(string &s)
{
    int n = s.size();
    int countOnes = count(s.begin(), s.end(), '1');
    int countZeros = n - countOnes;
    int totalMoves = min(countOnes, countZeros);

    if (odd(totalMoves))
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        solve(s);
    }
    return 0;
}

/*
Solution:
1. Count the number of 1's and 0's in the string.
2. Player can only make a move when there are two adjacent different elements.
3. So the total moves that can be made is min(countOnes, countZeros).
4. If the total moves are odd, then the player who starts the game will win.
5. If the total moves are even, then the player who starts the game will lose.

Example:
1. 1010
    countOnes = 2
    countZeros = 2
    totalMoves = 2
    totalMoves are even, so the player who starts the game will lose.
2. 1011001
    countOnes = 4
    countZeros = 3
    totalMoves = 3
    totalMoves are odd, so the player who starts the game will win.
*/