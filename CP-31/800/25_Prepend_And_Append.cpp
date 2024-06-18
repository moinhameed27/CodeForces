#include <iostream>
using namespace std;

int solve(string &s, int n)
{
    int i = 0, j = n - 1;
    while(i < j)
    {
        if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
        {
            i++;
            j--;
        }
        else
            break;
    }
    return j - i + 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << solve(s, n) << endl;
    }
return 0;
}

/*
---------------------------------------------------------------------------------------------------------------------------------
Solution:
1. Start with two pointer, one at the start and other at the end of the array.
2. If both pointers have different value, keep checking until they have same value.
3. At the end, return the size of strings between both poniters.
*/