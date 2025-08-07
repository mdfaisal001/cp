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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        };
        if (freq.size() >= 3)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (freq.size() == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            auto it = freq.begin();
            int firstElem = it->second;
            it++;
            int secondElem = it->second;
            if (firstElem == secondElem)
            {
                cout << "YES" << endl;
            }
            else if (n % 2 == 1 && abs(firstElem - secondElem) == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

/*#include <iostream>

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int target;
        sort(a.begin(), a.end());
        if (n < 2)
        {
            cout << "NO" << endl;
            continue;
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && a[i] + a[j] == target)
                {
                    found = true;
                }
                else
                {
                    found = false;
                    break;
                }
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}*/

// Time Complexity (TC): O(nlog2n) = O(100*log2(100)) = O(100*7) = O(700)
// Space Complexity (SC): O(n+n) = O(2n) = O(n) = O(100)y