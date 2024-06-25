#include <iostream>
#include <vector>
#include <set>
using namespace std;

int solve(int a, int b, int xk, int yk, int xq, int yq)
{
    vector<pair<int, int>> directions = {{a, b}, {-a, b}, {a, -b}, {-a, -b},
                                         {b, a}, {-b, a}, {b, -a}, {-b, -a}};
    set<pair<int, int>> st1, st2;
    for(auto &d : directions)
    {
        int x = xk + d.first;
        int y = yk + d.second;
        st1.insert({x, y});

        x = xq + d.first;
        y = yq + d.second;
        st2.insert({x, y});
    }
    int count = 0;
    for(auto &st : st1)
    {
        if(st2.find(st) != st2.end())
            count++;
    }
    return count;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;

        cout << solve(a, b, xk, yk, xq, yq) << endl;
    }
    return 0;
}

/*
Solution:
1. Find all the places from where king and queen can be attacked with respect to a and b.
2. Then find the common points where both king and queen can be attacked.
3. As there are a and b (Horizontal, Vertical, Right, Left) moves so there will be total 8 directions (4 for each).
*/