#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.
Your task is to return 1 if the given array is sorted. Else, return 0.

Problem Link:
https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

int isSorted(int n, vector<int> arr)
{
    // Write your code here.

    // Iterate through the array from the first element to the second last element.
    for (int i = 0; i < n - 1; i++)
    {
        // Check if the current element is less than or equal to the next element.
        if (arr[i] <= arr[i + 1])
        {
            // If it is, continue checking the next pair of elements.
            continue;
        }
        else
        {
            // If not, return 0, indicating that the array is not sorted.
            return 0;
        }
    }

    // If the loop completes without finding any pair of elements where the current
    // element is greater than the next element, return 1, indicating that the array is sorted.
    return 1;
}
