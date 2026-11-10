#include <stdio.h>
int main() 
{
    int n,i,j,k; // You can change this number to change the height of the triangle
    printf("Enter a number:");
    scanf("%d",&n);
    for(i = 1; i <= n; i++) 
	{
        // 1. Print spaces to align the triangle
        for(j = 1; j <= n - i; j++) 
		{
            printf("  ");
        }
        // 2. Print numbers counting UP from 1 to i
        for(j = n; j >= n-i+1; j--) 
		{
            printf("%d ", j);
        }
        // 3. Print numbers counting DOWN from i-1 back to 1
        for(k = n-i+2; k <= n; k++) 
		{
            printf("%d ", k);
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}

