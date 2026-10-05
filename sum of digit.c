//w.c.p to find sum of digits//
#include<stdio.h>
int main()
{
	int n,digit,i=0,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>i)
	{
		digit=n%10;
		n=n/10;
		sum=sum+digit;
	}
	printf("sum=%d",sum);
	return 0;
}
