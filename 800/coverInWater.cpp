#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        bool continuousThree = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                continuousThree = true;
                break;
            }
            if (s[i] == '.')
            {
                count++;
            }
        }
        if (continuousThree)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}