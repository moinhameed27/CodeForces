#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve(string s)
{
    int n = s.size();
    vector<string> digits = {"00", "25", "50", "75"};
    int ans = INT_MAX;
    for(auto digit : digits)
    {
        int removals = 0;
        int j = n - 1;
        while(j > 0 && s[j] != digit[1])
            j--, removals++;
        
        int i = j - 1;
        while(i > 0 && s[i] != digit[0])
            i--, removals++;
        
        ans = min(ans, removals);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        
        string s = to_string(n);
        cout << solve(s) << endl;
    }
return 0;
}

/*
* Minimum number of steps to make the number divisible by 25.
Solution:
1. We can look for these digits in the reverse order (25, 50, 75, 00).
2. Check for each number how many removals will be required to bring these numbers together and on the last.
3. Whatever the minimum number of removals will be the answer.
*/