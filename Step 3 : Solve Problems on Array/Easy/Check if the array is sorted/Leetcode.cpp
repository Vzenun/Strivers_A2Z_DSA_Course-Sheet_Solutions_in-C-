#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

Problem Link:
https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

*/

class Solution
{
public:
    bool check(vector<int> &arr)
    {
        // Initialize a flag variable to track the number of inversions.
        int flag = 0;

        // Iterate through the array to check for inversions.
        for (int i = 0; i < arr.size() - 1; i++)
        {
            // If an inversion is found (current element is greater than the next element),
            // increment the flag.
            if (arr[i] > arr[i + 1])
            {
                flag++;
            }
        }

        // Store the last and first elements of the array.
        int last_element = arr[arr.size() - 1];
        int first_elem = arr[0];

        // If there are no inversions, or if there is only one inversion and the last element
        // is less than or equal to the first element, return true.
        if (flag == 0 || (flag == 1 && last_element <= first_elem))
        {
            return true;
        }

        // Otherwise, return false.
        return false;
    }
};
