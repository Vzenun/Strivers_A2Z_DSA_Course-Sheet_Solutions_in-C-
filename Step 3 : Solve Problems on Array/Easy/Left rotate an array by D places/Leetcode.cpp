#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Problem Link:
https://leetcode.com/problems/rotate-array/description/
*/

class Solution
{
public:
    // Procedure:
    // To rotate the array to the right by k steps, we perform the following steps:
    // 1. Calculate the effective rotation steps by taking the modulo of k with the array size.
    //    This ensures that k is within the range of valid rotations.
    // 2. Reverse the first portion of the array up to nums.size() - k.
    // 3. Reverse the second portion of the array from nums.size() - k to the end.
    // 4. Reverse the entire array to obtain the final rotated array.

    void rotate(vector<int> &nums, int k)
    {
        // Calculate the effective rotation steps by taking the modulo of k with the array size.
        k = k % nums.size();

        // Reverse the first portion of the array up to nums.size() - k.
        reverse(nums.begin(), nums.begin() + nums.size() - k);

        // Reverse the second portion of the array from nums.size() - k to the end.
        reverse(nums.begin() + nums.size() - k, nums.end());

        // Reverse the entire array to obtain the final rotated array.
        reverse(nums.begin(), nums.end());
    }
};
