#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Problem Link:
https://leetcode.com/problems/max-consecutive-ones/description/
*/

class Solution
{
public:
    // Procedure:
    // To find the maximum number of consecutive 1's in the given binary array 'arr',
    // we traverse through the array and maintain a count 'ct' of consecutive 1's.
    // Whenever we encounter a 0, we update the maximum consecutive count encountered so far ('answer').
    // Finally, we return the maximum consecutive count ('answer').

    int findMaxConsecutiveOnes(vector<int> &arr)
    {
        int answer = 0; // Initialize the maximum consecutive count to 0.
        int ct = 0;     // Initialize the count of consecutive 1's to 0.

        // Traverse through the array.
        for (int i = 0; i < arr.size(); i++)
        {
            // If the current element is 1, increment the count of consecutive 1's ('ct').
            if (arr[i] == 1)
            {
                ct++;
            }
            else
            {
                // If the current element is 0, update the maximum consecutive count ('answer')
                // and reset the count of consecutive 1's ('ct') to 0.
                answer = max(answer, ct);
                ct = 0;
            }
        }

        // Update the maximum consecutive count ('answer') one last time,
        // as the array might end with consecutive 1's.
        answer = max(answer, ct);

        // Return the maximum consecutive count.
        return answer;
    }
};
