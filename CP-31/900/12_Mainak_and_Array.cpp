#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

int solve(vi &v, int n)
{
    // To make things Work if there's a single element in the array
    int maxi = v[n - 1] - v[0]; 

    // Fix the first element 
    for(int i = 1; i < n; i++)
        maxi = max(maxi, v[i] - v[0]);
    
    // Fix the last element
    for(int i = 0; i < n - 1; i++)
        maxi = max(maxi, v[n - 1] - v[i]);
    
    // Whole Array as a subsegment
    for(int i = 0; i < n - 1; i++)
        maxi = max(maxi, v[i] - v[i + 1]);

    return maxi;
}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
        cout << solve(v, n) << endl;
    }
return 0;
}

/*
Solution:
We have 3 things to check that how can we get the maximum of a[n] - a[1].
1. Fix the first element and find the maximum difference between the first element and the rest of the elements.
2. Fix the last element and find the maximum difference between the last element and the rest of the elements.
3. Find the maximum difference between the adjacent elements (By taking whole array as a subsegment).
a1, a2, a3, a4, a5 : k = 0
a2, a3, a4, a5, a1 : k = 1 --> a1 - a2
a3, a4, a5, a1, a2 : k = 2 --> a2 - a3
a4, a5, a1, a2, a3 : k = 3 --> a3 - a4
a5, a1, a2, a3, a4 : k = 4 --> a4 - a5
a1, a2, a3, a4, a5 : k = 5 
*/