#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an array 'arr' containing 'n' elements, rotate this array left once and return it.
Rotating the array left by one means shifting all elements by one place to the left and moving the first element to the last position in the array.

Problem Link:
https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n)
{
    // Procedure:
    // To rotate the array left by one position, we can perform the following steps:
    // 1. Iterate through the array from the first element to the second last element.
    // 2. Swap each element with the next element in the array.
    // 3. After the loop, the first element will be swapped to the last position,
    //    effectively rotating the array left by one position.

    // Iterate through the array from the first element to the second last element.
    for (int i = 0; i < n - 1; i++)
    {
        // Swap the current element with the next element in the array.
        swap(arr[i], arr[i + 1]);
    }

    // Return the modified array after left rotation.
    return arr;
}
