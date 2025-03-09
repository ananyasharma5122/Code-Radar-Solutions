// Your code here...
int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, current = 1, index = 0;
    
    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            // Current number is in the array, move to next element in arr
            index++;
        } else {
            // Current number is missing
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }
    
    return -1; // Should never reach here based on problem constraints
}
