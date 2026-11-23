/*write a c programm to take an input as an array and display input on the screan */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n],i;
	for(i = 0;i < n;i++)
	{
		printf("Enter number of eliments: ");
		scanf("%d",&a[i]);
	}
	for(i = 0;i < n;i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}






