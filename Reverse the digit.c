//w.c.p to reverse the digits of an whole number//
#include<stdio.h>
int main()
{
	printf("Enter a whole number:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		printf("%d\n",digit);
		n=n/10;
		count++;
	}	
	printf("number of digits=%d",count);
	return 0;
}
	

