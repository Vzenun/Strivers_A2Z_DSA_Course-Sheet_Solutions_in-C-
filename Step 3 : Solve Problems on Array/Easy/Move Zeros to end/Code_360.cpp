#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.

Problem Link:
https://www.naukri.com/code360/problems/ninja-and-the-zero-s_6581958?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/

vector<int> moveZeros(int n, vector<int> arr)
{
    // Procedure:
    // To move all zeros to the end while maintaining the order of non-zero elements,
    // we iterate through the array and move non-zero elements to the front of the array.
    // After iterating through the array, we fill the remaining positions with zeros.

    // Initialize an index 'ind' to track the position to place non-zero elements.
    int ind = 0;

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

    // Fill the remaining positions from 'ind' to the end of the array with zeros.
    for (int i = ind; i < n; i++)
    {
        arr[i] = 0;
    }

    // Return the modified array.
    return arr;
}
