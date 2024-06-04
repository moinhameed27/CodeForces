#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(unordered_map<int, int> &mp)
{
    int n = mp.size();
    if (n == 1)
        cout << "YES" << endl;
    else if (n == 2)
    {
        auto it = mp.begin();
        long long elem1Freq = it->second;
        it++;
        long long elem2Freq = it->second;
        if(abs(elem1Freq - elem2Freq) <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        solve(mp);

        t--;
    }
    return 0;
}


/*
Three things to Check:
1. If there is only one distinct element in the array, return "YES"
2. If there are more than 2 distinct elements, return "NO"
3. In case of 2 distinct elements, check if their count is equal or with maximum one difference(Odd size Case), return "YES" otherwise "NO"

Input:
5
2
8 9
3
1 1 2
4
1 1 4 5
5
2 3 3 3 3
4
100000 100000 100000 100000

Output:
Yes
Yes
No
No
Yes
*/