#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
You are given a sorted integer array 'arr' of size 'n'.
You need to remove the duplicates from the array such that each element appears only once.
Return the length of this new array.

Problem Link:
https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

int removeDuplicates(vector<int> &arr, int n)
{
    // Write your code here.

    // Initialize a variable to count unique elements.
    int num = 0;

    // Iterate through the array from the first element to the second last element.
    for (int i = 0; i < n - 1; i++)
    {
        // Check if the current element is less than the next element.
        if (arr[i] < arr[i + 1])
        {
            // If it is, increment the count of unique elements.
            num++;
        }
    }

    // Add 1 to the count to account for the last element of the array.
    // This is because the loop only counts the number of unique elements until the second last element.
    // The last element is always considered unique.
    return num + 1;
}
