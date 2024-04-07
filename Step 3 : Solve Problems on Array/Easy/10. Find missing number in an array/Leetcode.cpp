#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Problem Link:
https://leetcode.com/problems/missing-number/description/
*/

class Solution
{
public:
    // Procedure:
    // To find the missing number in the given range [0, n], we can calculate the sum of all numbers in the range [0, n] using the formula n*(n+1)/2.
    // Then, we subtract the sum of elements in the given array 'nums' from the expected sum.
    // The difference will be the missing number.

    int missingNumber(vector<int> &nums)
    {
        int n = 0; // Initialize a variable to store the sum of elements in the array 'nums'.

        // Calculate the sum of elements in the array 'nums'.
        for (int i = 0; i < nums.size(); i++)
        {
            n += nums[i];
        }

        // Calculate the expected sum of numbers in the range [0, n].
        int expectedSum = (nums.size() * (nums.size() + 1)) / 2;

        // The missing number is the difference between the expected sum and the sum of elements in 'nums'.
        int missingNum = expectedSum - n;

        // Return the missing number.
        return missingNum;
    }
};
