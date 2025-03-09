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

int main() {
    int n, k;

    // Read the size of the array
    scanf("%d", &n);

    int arr[n];

    // Read the sorted array of distinct positive integers
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of K
    scanf("%d", &k);

    // Call the findKthMissing function
    int result = findKthMissing(arr, n, k);

    // Output the Kth missing positive number
    printf("%d\n", result);

    return 0;
}
