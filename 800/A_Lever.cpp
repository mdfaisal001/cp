#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findResult(vector<int> &a, vector<int> &b, int &count)
{
    // Stop if no element has a[i] > b[i]
    bool hasGreater = false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] > b[i])
            hasGreater = true;

    if (!hasGreater)
        return;

    // Step 1: decrease one element where a[i] > b[i]
    for (int i = 0; i < a.size(); i++)
        if (a[i] > b[i])
        {
            a[i]--;
            break;
        }

    // Step 2: increase one element where a[i] < b[i]
    for (int i = 0; i < a.size(); i++)
        if (a[i] < b[i])
        {
            a[i]++;
            break;
        }

    count++;
    findResult(a, b, count);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        int count = 0;
        findResult(a, b, count);
        cout << count << endl;
    }
    return 0;
}