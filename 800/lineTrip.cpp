#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> stations(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i]; // input the station positions
        }
        int maxi = stations[0];
        int end = 0;
        sort(stations.begin(), stations.end()); // sort the station positions
        for (int i = 0; i < n; i++)
        {
            int difference = stations[i] - end;
            end = stations[i];
            maxi = max(maxi, difference);
        }
        maxi = max(maxi, 2 * (x - end)); // the dn position needs the 2x distance to reach the destination;
        cout << maxi << endl;            // check the distance from the last station to the destination
    }
    return 0;
}
