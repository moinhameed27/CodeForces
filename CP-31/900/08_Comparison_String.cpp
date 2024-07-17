#include <iostream>
using namespace std;

int solve(string s)
{
    int count = 1, maxCount = 1;
    char curr = s[0];
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == curr)
            count++;
        else
            curr = s[i], count = 1;
        maxCount = max(maxCount, count);
    }
    return maxCount + 1;
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
        cout << solve(s) << endl;
    }
    
return 0;
}

/*
Solution:
1. Traverse the string.
2. Keep track of the maximum count of consecutive same characters.
3. Now return the maximum count + 1.
Examples:
1. "<<<<"
Same consecutive Characters are 4, so number of total characters are 5. As they suggest that the numbers are increasing, so they can't be same.
{1, 2, 3, 4, 5}
2. "<><>"
No same consecutive characters, so we just need two characters to fulfill the condition.
{1, 2, 1, 2, 1}
3. "<<><<<"
Same consecutive Characters are 3, so number of total characters are 4.
{1, 2, 3, 1, 2, 3, 4}
*/