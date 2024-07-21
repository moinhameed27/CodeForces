#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

bool odd(int n) { return n % 2 == 1; }
bool even(int n) { return n % 2 == 0; }

void solve(vi &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if(v[i] == 1)
            v[i]++;
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(v[i + 1] % v[i] == 0)
            v[i + 1]++;
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        solve(v, n);
    }
    return 0;
}

/*
Solution:
1. If the number in the array is 1, then increment it by 1.
2. By doing this, we are making sure that the number is not divisible by 1 because minimum element in the array will be 2.
3. Now, check if the next element is divisible by the current element, if yes then increment the next element by 1.
4. Print the array.
*/