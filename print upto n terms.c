#include <stdio.h>

int main()
{
    int n, i = 1,fact = 1;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while(i <= n)
    {
        fact = fact * i;               // Calculate i!
        sum = sum + (float)fact / (2 * i);

        i++;
    }

    printf("Sum of the series = %.2lf\n", sum);

    return 0;
}


