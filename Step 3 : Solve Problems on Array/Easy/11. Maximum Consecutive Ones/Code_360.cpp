#include <bits/stdc++.h>
using namespace std;

/*

Problem Statement:

The Road Department is planning to make some new traffic regulations. But to make the regulations they need to analyze the current situation of the traffic.
The traffic can be analyzed from an array 'VEHICLE' of length 'N' , which consists of ‘0’ if there is no vehicle at that point and ‘1’ if there is a vehicle at the point.
Unfortunately the array ‘VEHICLE’ got corrupted as at most 'M' '1' got flipped to ‘0’.
Traffic jam is defined as the length of consecutive vehicles on the road.
The Road Department wants to know the worst possible scenario for the traffic jam. Return the maximum possible length of the consecutive vehicles.

Problem Link:

https://naukri.com/code360/problems/traffic_6682625?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

int traffic(int n, int m, vector<int> arr)
{
    // Procedure:
    // To find the maximum possible length of consecutive vehicles (traffic jam),
    // we use a sliding window approach.
    // Initialize two pointers 'i' and 'j' to traverse the array 'arr'.
    // 'i' represents the end of the window and 'j' represents the start of the window.
    // Maintain a count 'cd' of the number of '0's encountered in the current window.
    // Keep moving the window forward until 'cd' exceeds 'm'.
    // Update the maximum length of consecutive vehicles encountered so far ('ans').

    int i = 0;   // Initialize pointer 'i' to traverse the array.
    int j = 0;   // Initialize pointer 'j' to represent the start of the window.
    int cd = 0;  // Initialize a count of '0's encountered in the current window.
    int ans = 0; // Initialize the maximum possible length of consecutive vehicles.

    // Iterate through the array 'arr'.
    while (i < n)
    {
        // If the current element is '1', increment 'i' and update 'ans' accordingly.
        if (arr[i] == 1)
        {
            i++;
            ans = max(ans, i - j);
        }
        else
        {
            // If the current element is '0' and the count of '0's in the window is less than 'm',
            // increment 'cd', move 'i' forward, and update 'ans'.
            if (cd < m)
            {
                cd++;
                i++;
                ans = max(ans, i - j);
            }
            else
            {
                // If the count of '0's in the window exceeds 'm', move the window forward
                // by incrementing 'j' until 'cd' becomes less than or equal to 'm'.
                // Update 'ans' accordingly.
                cd++;
                while (cd > m)
                {
                    if (arr[j] == 0)
                    {
                        cd--;
                    }
                    j++;
                }
                i++;
            }
        }
    }

    // Return the maximum possible length of consecutive vehicles.
    return ans;
}
