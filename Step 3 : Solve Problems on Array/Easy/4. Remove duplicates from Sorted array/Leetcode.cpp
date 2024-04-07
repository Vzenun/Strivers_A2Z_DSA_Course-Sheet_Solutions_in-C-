#include <bits/stdc++.h>
using namespace std;

/*

Problem Statement:
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.


Problem Link:
https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

*/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // Procedure:
        // We iterate through the sorted array, copying each unique element to the front of the array.
        // We maintain an index 'ind' to track the position of unique elements.
        // When encountering a duplicate, we simply skip it.
        // Finally, we copy the last element of the array to the position indicated by 'ind' and return 'ind + 1',
        // representing the number of unique elements in the modified array.

        // Initialize an index variable to track the position of unique elements in the array.
        int ind = 0;

        // Iterate through the array from the first element to the second last element.
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // Check if the current element is less than the next element.
            if (nums[i] < nums[i + 1])
            {
                // If it is, copy the current element to the position indicated by the index.
                nums[ind] = nums[i];
                // Increment the index to indicate the next position for a unique element.
                ind++;
            }
            // If the current element is equal to the next element, it means it's a duplicate.
            // So, we continue to the next iteration without doing anything.
            else if (nums[i] == nums[i + 1])
            {
                // Continue to the next iteration as duplicates are skipped.
                continue; // Skipping duplicates to keep only unique elements.
            }
        }

        // Copy the last element of the array to the position indicated by the index.
        nums[ind] = nums[nums.size() - 1];
        // Increment the index to account for the last unique element.
        ind++;

        // Return the index, which represents the number of unique elements in the modified array.
        return ind; // Returning the count of unique elements.
    }
};
