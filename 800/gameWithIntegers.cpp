#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n % 3 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl; // if n % 3 == 2, the first player can always win by making the right moves
    }
    return 0;
}
