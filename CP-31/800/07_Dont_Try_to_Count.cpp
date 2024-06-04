#include <iostream>
#include <string>

using namespace std;

int solve(string &x, string &s)
{
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (x.find(s) != string::npos)
            return count;
        x += x;
        count++;
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, m;

        cin >> n >> m;
        string x, s;

        cin >> x;
        cin >> s;

        cout << solve(x, s) << endl;

        t--;
    }
    return 0;
}

/*
1. Number of operations cannot be greater than 5, according to constraints
2. Initially if s is not part of x, append x with itself and increase the count
3. If s becomes part of x, return the count else return -1
4. There will be maximum of 6 operations (i = 0 --> i < 6)

Input:  
12
1 5
a
aaaaa
5 5
eforc
force
2 5
ab
ababa
3 5
aba
ababa
4 3
babb
bbb
5 1
aaaaa
a
4 2
aabb
ba
2 8
bk
kbkbkbkb
12 2
fjdgmujlcont
tf
2 2
aa
aa
3 5
abb
babba
1 19
m
mmmmmmmmmmmmmmmmmmm

Output:
3
1
2
-1
1
0
1
3
1
0
2
5
*/