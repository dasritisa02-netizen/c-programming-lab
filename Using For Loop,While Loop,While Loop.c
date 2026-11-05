#include <stdio.h>

int main() {
    int n, i;

    // 1. Get the target limit from the user
    printf("Enter the ending number : ");
    scanf("%d", &n);


    // 2. USING A FOR LOOP
    printf("\n--- Using For Loop ---\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");


    // 3. USING A WHILE LOOP
    printf("\n--- Using While Loop ---\n");
    i = 1; // Reset counter
    while (i <= n) {
        printf("%d ", i);
        i++; // Increment counter
    }
    printf("\n");


    // 4. USING A DO-WHILE LOOP
    printf("\n--- Using Do-While Loop ---\n");
    i = 1; // Reset counter
    do {
        printf("%d ", i);
        i++; // Increment counter
    } while (i <= n);
    printf("\n");

    return 0;
}
