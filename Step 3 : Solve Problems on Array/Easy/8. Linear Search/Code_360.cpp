#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
You are given an array ‘arr’ containing ‘n’ integers. You are also given an integer ‘num’, and your task is to find whether ‘num’ is present in the array or not.
If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. Else, return -1.

Problem Link:
https://www.naukri.com/code360/problems/linear-search_6922070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/

int linearSearch(int n, int num, vector<int> &arr)
{
    // Procedure:
    // To perform linear search, iterate through the array and check each element.
    // If the current element is equal to the target 'num', return its index.
    // If the target 'num' is not found in the array, return -1.

    // Iterate through the array.
    for (int i = 0; i < n; i++)
    {
        // If the current element is equal to the target 'num',
        // return its index (0-based).
        if (arr[i] == num)
        {
            return i;
        }
    }

    // If the target 'num' is not found in the array, return -1.
    return -1;
}
