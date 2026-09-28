//1+2+4+7+11+..upto n term..w.c.p to calculate sum of the given series//
#include<stdio.h>
int main()
{
	int term=1,sum=0,i=1,d=1,n;
	printf("Enter the number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",term);
		sum = sum+term;
		term=term+d;
		d++;
		i++;
	}
	printf("sum of the series=%d\n",sum);
	return 0;
}
