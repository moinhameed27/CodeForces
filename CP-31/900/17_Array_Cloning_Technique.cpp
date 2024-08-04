#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

int solve(vi &v, int n, int freq)
{
    int minOps = 0;
    while (freq < n)
    {
        minOps++; // Clone the array
        if (n - freq >= freq)
        {
            minOps += freq; // Swaps required
            freq *= 2;      // New frequency of maximum element after swapping from cloned array
        }
        // After cloning the array, if less swaps are required to get the array of same elements
        else
        {
            minOps += n - freq; // Swaps required
            freq = n;
        }
    }
    return minOps;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int freq = 0, minOps = 0;
        for (auto &it : mp)
            freq = max(freq, it.second);

        cout << solve(v, n, freq) << endl;
    }
    return 0;
}

/*
Solution:
1. The easiest way to get the array of same elements using two operations of swapping and cloning is to get the maximum element frequency
   and use the two operations.
2. Find the maximum frequency of any element.
3. Clone the array and swap the elements to get the array of same elements.
4. If the elements are not enough, clone the array and swap the elements.
5. Repeat the above step until the elements are enough.
*/