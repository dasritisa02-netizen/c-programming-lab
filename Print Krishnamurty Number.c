#include <stdio.h>
// Function to calculate the factorial of a digit
int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
	{
        fact *= i;
    }
    return fact;
}
int main() 
{
    int number, originalNumber, remainder, sum = 0;
    printf("Enter an integer to check: ");
    scanf("%d", &number);
    originalNumber = number;
    // Process each digit of the number
    while (number > 0) 
	{
        remainder = number % 10;         // Extract the last digit
        sum += factorial(remainder);      // Add its factorial to sum
        number = number / 10;             // Remove the last digit
    }
    // Check if the sum of factorials equals the original number
    if (sum == originalNumber)
	{
        printf("%d is a Krishnamurthy number.\n", originalNumber);
    } 
	else 
	{
        printf("%d is not a Krishnamurthy number.\n", originalNumber);
    }
    return 0;
}

