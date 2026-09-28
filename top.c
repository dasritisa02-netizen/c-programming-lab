//0,1,1,2,3,5,8..upto n term..w.c.p to display the given sequence//
#include<stdio.h>
int main()
{
	int i=1,a=0,b=1,c,n;
	printf("Enter the number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
