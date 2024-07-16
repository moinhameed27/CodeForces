#include <iostream>
#include <unordered_map>
using namespace std;

void solve(string s, int n, int k)
{
    unordered_map<char, int> mp;
    for(char ch : s)
        mp[ch]++;
    int oddFreq = 0;
    for(auto it : mp)
    {
        if(it.second % 2 != 0)
            oddFreq++;
    }
    oddFreq -= k;
    if(oddFreq <= 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        solve(s, n, k);
    }
    
return 0;
}

/*
Solution:
1. To check if a string can be made a palindrome or not, count it's number of odd frequency characters.
2. If count is more than 1, string cannot be made palindrome.
3. In this problem, we can remove at most k characters from the string.
4. So, we can remove k odd frequency characters and still make the string palindrome.
*/