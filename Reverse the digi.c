//w.c.p to reverse the digits of an whole number//
#include<stdio.h>
int main()
{
	int n,count = 0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		printf("%d\n",digit);
		n=n/10;
		count++;
	}	
	printf("count=%d",count);
	return 0;
}
	

