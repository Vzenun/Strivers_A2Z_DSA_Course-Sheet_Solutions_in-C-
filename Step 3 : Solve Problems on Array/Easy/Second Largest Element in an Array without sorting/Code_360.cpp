#include <bits/stdc++.h>
using namespace std;

/*
Problem statement:

You have been given an array ‘a’ of ‘n’ unique non-negative integers.
Find the second largest and second smallest element from the array.
Return the two elements (second largest and second smallest) as another array of size 2.

Problem Link:
https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

*/

vector<int> getSecondOrderElements(int n, vector<int> arr)
{
    // Write your code here.

    // Initialize variables to store minimum and maximum elements.
    int min1 = arr[0]; // Initialize min1 with the first element of the array.
    int max1 = arr[0]; // Initialize max1 with the first element of the array.

    // Find the minimum and maximum elements in the array.
    for (int i = 0; i < arr.size(); i++)
    {
        // Update min1 and max1 as needed.
        min1 = min(arr[i], min1); // Update min1 if the current element is smaller.
        max1 = max(arr[i], max1); // Update max1 if the current element is larger.
    }

    // Initialize variables to store second smallest and second largest elements.
    int ans1 = -1;   // Initialize ans1 to -1. It will store the second largest element.
    int ans2 = max1; // Initialize ans2 with max1. It will store the second smallest element.

    // Find the second smallest and second largest elements.
    for (int i = 0; i < arr.size(); i++)
    {
        // Update ans2 if the current element is not the smallest.
        if (arr[i] != min1)
        {
            ans2 = min(arr[i], ans2); // Update ans2 if the current element is smaller than ans2.
        }
        // Update ans1 if the current element is not the largest.
        if (arr[i] != max1)
        {
            ans1 = max(arr[i], ans1); // Update ans1 if the current element is larger than ans1.
        }
    }

    // Store the second largest and second smallest elements in a vector.
    vector<int> ans;
    ans.push_back(ans1); // Store the second largest element.
    ans.push_back(ans2); // Store the second smallest element.

    // Return the vector containing the second largest and second smallest elements.
    return ans;
}
