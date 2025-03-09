
    int n;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {  // Validate user input
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    fibonacci(n);  // Call the function

    return 0;
}

void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

