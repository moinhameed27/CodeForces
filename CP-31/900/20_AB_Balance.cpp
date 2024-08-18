#include <iostream>
#include <string>
using namespace std;

string solve(string &s)
{
    int n = s.size();
    if(s[0] != s[n - 1])
        s[0] = s[n - 1];
    return s;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string ans = solve(s);
        cout << ans << endl;
    }
    return 0;
}

/*
Solution:
examples -  abab, abba, ababab, abababab, ababababab, abababababab, ababababababab, abababababababab, ababababababababab
            abba, abbbba, baaaab, baaabaa, baaabaaa, baaabaaab, baaabaaaba, baaabaaabaa, baaabaaabaaa
            
1. If the first and last characters are same, then the string is already balanced.
2. If the first and last characters are different, then we can make the string balanced by changing the first character to the last character.
*/