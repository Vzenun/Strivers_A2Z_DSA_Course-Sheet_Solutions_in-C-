#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.
The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.
Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

Problem Link:
https://www.naukri.com/code360/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Procedure:
    // To find the union of two sorted arrays, 'a' and 'b':
    // 1. Initialize an empty array 'ans' to store the union.
    // 2. Initialize two pointers 'i' and 'j' for arrays 'a' and 'b' respectively.
    // 3. Iterate through both arrays simultaneously:
    //    - Compare the elements pointed by 'i' and 'j'.
    //    - Push the smaller element to 'ans' and move the corresponding pointer forward.
    //    - If the pushed element is the same as the last element in 'ans', skip duplicates.
    // 4. After iterating through both arrays, handle remaining elements from both arrays.
    // 5. Return the final union array 'ans'.

    vector<int> ans;                // Initialize an empty vector to store the union.
    int i = 0, j = 0;               // Initialize pointers for arrays 'a' and 'b'.
    int n = a.size(), m = b.size(); // Store sizes of arrays 'a' and 'b'.

    // Iterate through both arrays simultaneously.
    while (i < n && j < m)
    {
        // Compare elements pointed by 'i' and 'j'.
        // Push the smaller element to 'ans' and move the corresponding pointer forward.
        if (a[i] < b[j])
        {
            if (a[i] != ans.back()) // Skip duplicates.
                ans.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            if (b[j] != ans.back()) // Skip duplicates.
                ans.push_back(b[j]);
            j++;
        }
        else // If elements are equal, push only one of them.
        {
            if (a[i] != ans.back()) // Skip duplicates.
                ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Handle remaining elements from array 'a'.
    while (i < n)
    {
        if (a[i] != ans.back()) // Skip duplicates.
            ans.push_back(a[i]);
        i++;
    }

    // Handle remaining elements from array 'b'.
    while (j < m)
    {
        if (b[j] != ans.back()) // Skip duplicates.
            ans.push_back(b[j]);
        j++;
    }

    // Return the final union array.
    return ans;
}
