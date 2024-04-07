#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.

Problem Link:
https://www.naukri.com/code360/problems/rotate-array_1230543?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/

vector<int> rotateArray(vector<int> nums, int k)
{
    // Procedure:
    // To rotate the array to the left by 'k' steps, we perform the following steps:
    // 1. Calculate the effective rotation steps by taking the modulo of 'k' with the array size.
    //    This ensures that 'k' is within the range of valid rotations.
    // 2. Reverse the first portion of the array up to 'k' elements.
    // 3. Reverse the second portion of the array from 'k' to the end.
    // 4. Reverse the entire array to obtain the final rotated array.

    // Calculate the effective rotation steps by taking the modulo of 'k' with the array size.
    k = k % nums.size();

    // Reverse the first portion of the array up to 'k' elements.
    reverse(nums.begin(), nums.begin() + k);

    // Reverse the second portion of the array from 'k' to the end.
    reverse(nums.begin() + k, nums.end());

    // Reverse the entire array to obtain the final rotated array.
    reverse(nums.begin(), nums.end());

    // Return the modified array after left rotation.
    return nums;
}
