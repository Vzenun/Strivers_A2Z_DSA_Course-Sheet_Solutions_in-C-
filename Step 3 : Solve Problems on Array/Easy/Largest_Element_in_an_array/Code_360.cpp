#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an array ‘arr’ of size ‘n’ find the largest element in the array.

*/

int largestElement(vector<int> &arr, int n)
{
    // Initialize the variable to store the maximum element found so far.
    int max1 = 0; // Initially, we assume the maximum is 0.

    // Iterate through each element in the array.
    for (int i = 0; i < arr.size(); i++)
    {
        // Update the maximum if the current element is greater than the current maximum.
        max1 = max(max1, arr[i]); // Keep track of the maximum value found so far.
    }

    // Return the maximum element found in the array.
    return max1;
}
