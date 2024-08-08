#include <iostream>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

bool even(int n) { return n % 2 == 0; }
bool odd(int n) { return n % 2 != 0; }

void solve(int a, int b, int c)
{
    bool ans = false;
    if(a == b && b == c)
        ans = true;
    if( (2 * b - c) % a == 0 && (2 * b - c) / a > 0)
        ans = true;
    if( (c + a) % (2 * b) == 0 )
        ans = true;
    if( (2 * b - a) % c == 0 && (2 * b - a) / c > 0)
        ans = true;
    if(ans)
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
        int a, b, c;
        cin >> a >> b >> c;

        solve(a, b, c);
    }
return 0;
}

/*
Solution:
1. If a = b = c, then the answer is YES.
2. Multiply m with all a, b, c and check for the following conditions:
    a. if answer is perfectly divisible
    b. if answer is greater than 0
3. am, b, c 
    a. b - am = c - b
    b. c + am = 2b
    c. am = 2b - c
    d. m = (2b - a) / c
4. a, bm, c
    a. bm - a = c - bm
    b. c + a = 2bm
    c. m = (c + a) / 2b
5. a, b, cm
    a. b - a = cm - b
    b. cm + a = 2b
    c. m = (2b - a) / c
6. If any of the above conditions are true, then the answer is YES.
*/