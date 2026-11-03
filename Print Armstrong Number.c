#include <stdio.h>
int main() 
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) 
	{
        // Get the last digit
        remainder = originalNum % 10;
        // Multiply the digit three times and add it to the result
        result += remainder * remainder * remainder;
        // Remove the last digit
        originalNum /= 10;
    }
    // Check if the result matches the original number
    if (result == num) 
	{
        printf("%d is an Armstrong number.\n", num);
    } 
	else 
	{
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}

