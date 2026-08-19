/*
====================================================================
Problem: Merge Sort
Platform: DSA
Difficulty: Medium

Problem Statement:
Given an array of integers, sort the array in ascending order using
the Merge Sort algorithm.

Input:
arr = [22, 44, 1, 23, 2, 4, 43, 2, 65, 87]

Output:
1 2 2 4 22 23 43 44 65 87

====================================================================
Approach:

Merge Sort uses the Divide and Conquer technique.

1. Divide the array into two halves.
2. Recursively sort both halves.
3. Merge the two sorted halves into one sorted array.

The merge function compares elements from both sorted halves and
places them in the correct order.

====================================================================
Algorithm:

1. Find the middle index of the current array.
2. Recursively apply Merge Sort to the left half.
3. Recursively apply Merge Sort to the right half.
4. Merge the two sorted halves.
5. Continue until the complete array is sorted.

For merging:
- Compare the first elements of both halves.
- Add the smaller element to a temporary array.
- Continue until one half is exhausted.
- Add the remaining elements.
- Copy the temporary array back into the original array.

====================================================================
Complexity:

Time Complexity:
O(n log n)

Space Complexity:
O(n)

====================================================================
Code
====================================================================
*/

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    // Compare elements of both halves
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Add remaining elements of left half
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Add remaining elements of right half
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements back to original array
    for (int ind = 0; ind < temp.size(); ind++)
    {
        arr[st + ind] = temp[ind];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    // Base case
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        // Sort left half
        mergeSort(arr, st, mid);

        // Sort right half
        mergeSort(arr, mid + 1, end);

        // Merge both sorted halves
        merge(arr, st, mid, end);
    }
}

int main()
{
    vector<int> arr = {22, 44, 1, 23, 2, 4, 43, 2, 65, 87};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
