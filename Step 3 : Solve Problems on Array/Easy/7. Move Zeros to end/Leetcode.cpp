#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Problem Link:
https://leetcode.com/problems/move-zeroes/submissions/1202555816/
*/

class Solution
{
public:
    // Procedure:
    // To move all 0's to the end of the array while maintaining the relative order of non-zero elements,
    // we iterate through the array and move non-zero elements to the front of the array.
    // After iterating through the array, we fill the remaining positions with 0's.

    void moveZeroes(vector<int> &arr)
    {
        // Initialize an index 'ind' to track the position to place non-zero elements.
        int ind = 0;
        // Store the size of the array.
        int n = arr.size();

        // Iterate through the array.
        for (int i = 0; i < n; i++)
        {
            // If the current element is non-zero,
            // copy it to the position indicated by 'ind' and increment 'ind'.
            if (arr[i] != 0)
            {
                arr[ind] = arr[i];
                ind++;
            }
        }

        // Fill the remaining positions from 'ind' to the end of the array with 0's.
        for (int i = ind; i < n; i++)
        {
            arr[i] = 0;
        }
    }
};
