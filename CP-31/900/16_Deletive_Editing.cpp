#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

bool even(int n) { return n % 2 == 0; }
bool odd(int n) { return n % 2 != 0; }

void solve(string &s, string &t)
{
    unordered_map<char, int> mp1, mp2;
    int m = s.size(), n = t.size();
    for (char &ch : s)
        mp1[ch]++;

    for (char &ch : t)
        mp2[ch]++;

    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (s[i] == t[j])
        {
            // Low frequency in s, t cannot be formed
            if(mp1[s[i]] < mp2[s[i]])
                break;
            // Same Frequency, increment j pointer and decrease it's frequency too
            else if(mp1[s[i]] == mp2[s[i]])
            {
                mp2[t[j]]--;
                j++;
            }
        }
        // Decrease the frequency of s and increment i pointer always
        mp1[s[i]]--;
        i++;
    }

    if(j == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, t;
        cin >> s >> t;

        solve(s, t);
    }
    return 0;
}

/*
Solution:
1. Create two maps mp1 and mp2 to store the frequency of characters in string s and t respectively.
2. Traverse the string s and t using two pointers i and j.
3. If the character at i and j are same, then check the frequency of characters.
4. If frequency of character in s is less than frequency of character in t, then break the loop. (Because in this way t cannot be formed from s)
5. If frequency is same, then decrease the frequency of both s and t and increment the pointers.
*/