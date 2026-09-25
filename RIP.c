//w.c.p. display odd numbers from 1 to n//
#include<stdio.h>
int main()
{
	int i,n;
	i = 1;
	printf("Enter the n number:");
	scanf("%d",&n);
	while(i <= n)
	{
		printf("%d",i);
		i = i+2;
	}
	return 0;
}
