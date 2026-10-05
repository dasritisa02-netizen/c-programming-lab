//w.c.p to display the first n(n>0) terms of the tribonacci sequence//
#include<stdio.h>
int main()
{
	int n,i=1,a=0,b=1,c=1,d;
	printf("Enter the number of terms:");
	scanf("%d", &n);
	while(i<=n)
	{
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	return 0;
}
