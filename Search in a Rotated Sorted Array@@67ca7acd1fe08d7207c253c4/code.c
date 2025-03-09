// Your code here...
#include <stdio.h>

// Function to find the target in a rotated sorted array
int searchInRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the element is found at mid
        if (arr[mid] == target)
            return mid;

        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {
            if (target >= arr[left] && target < arr[mid])
                right = mid - 1; // Search in the left half
            else
                left = mid + 1; // Search in the right half
        }
        // Otherwise, the right half must be sorted
        else {
            if (target > arr[mid] && target <= arr[right])
                left = mid + 1; // Search in the right half
            else
                right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}
