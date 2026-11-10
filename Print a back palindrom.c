/* Write a c program to print the following pattern
4 3 2 1 2 3 4
  4 3 2 3 4
    4 3 4
      4        */
#include <stdlib.h> // Required for abs() function
int main() 
{	
    int n,j,i,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i = 0; i < n; i++) 
	{
        // 1. Print spaces
        for(j = 0; j < i; j++) 
		{
            printf("  ");
        }
        // 2. Print numbers in a single loop
        // We go from -3 to +3 around a center point
        for(k = -3 + i; k <= 3 - i; k++) 
		{
            printf("%d ", 4 - abs(k));
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}

