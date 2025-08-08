#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n, x;
        cin >> n >> x;
        int parent = n.size();
        int child = x.size();

        string temp = n;
        if (n.find(x) != string::npos)
        {
            cout << 0 << endl;
            continue;
        }
        int count = 0;
        for (int i = 0; i < parent * child; i++)
        {

            if (temp.find(x) != string::npos)
            {
                cout << count << endl;
                break;
            }
            temp += n;
            count++;
        }
        if (temp.find(x) == string::npos)
        {
            cout << -1 << endl; // If we never find x in the repeated n
        }
        return 0;
    }
}