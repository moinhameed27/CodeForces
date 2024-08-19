#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long

void solve(vi &v, int n)
{
    
    int zeros = count(v.begin(), v.end(), 0);
    int ones = count(v.begin(), v.end(), 1);

    if(ones == 0)
        cout << 0 << endl;
    else    
        cout << ones * (1ll << zeros) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
        solve(v, n);
    }
return 0;
}

/*
Count number of nearly full subsequences of the array. Nearly Subsequence = TotalSum - 1.
Solution:
1. To get the nearly full subsequences, we need to find the number of 1's and 0's in the array.
2. Number of 1's will tell that how many nearly full subsequences we can make.
3. For every removal of one, we have a option either inlude the zero or not, that's why answer will be ones * (2 ^ zeros). 
*/