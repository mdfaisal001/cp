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
        if (a[0] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
} // the actual sort logic is from index 2 so if the first element is not 1 we definitley say we cant do sorting ..

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &a, int len)
{
    unordered_set<int> set;
    if (a[0] >= len || a[0] < 1)
        return false;
    set.insert(a[0]);
    for (int i = 1; i < len; i++)
    {
        if (a[i] > len)
            return false;
        if (set.find(a[i]) != set.end())
        {
            return false;
        }
        set.insert(a[i]);
    }
    return true;
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
        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }
        string ans = "YES";
        int len = a.size();
        if (!isValid(a, len))
        {
            ans = "No";
            cout << ans << endl;
            continue;
        }
        else
        {
            for (int i = 1; i < len - 2; i += 2)
            {
                if (a[i - 1] < a[i] && a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
                else
                {
                    ans = "No";
                    cout << ans << endl;
                    continue;
                }
            }
            cout<< ans << endl;
        }
    }
    return 0;
}*/