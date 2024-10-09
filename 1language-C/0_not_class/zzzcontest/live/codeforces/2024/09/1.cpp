#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, an;
        cin >> a >> an;
        int c = 0, inc = 1;
        while (a <= an)
        {
            c++;
            a += inc;
            inc++;
        }
        cout << c << endl;
    }
}