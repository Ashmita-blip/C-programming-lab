//1+2+4+7+11... upto n terms.W.C.P. to calculate sum of the given series.//
#include <stdio.h>
int main()
{
	int n,c,i,sum,d;
	printf("enter the value of n terms:");
	scanf("%d",& n);
	i=1;
	sum=0;
	c=0;
	d=1;
	while(c<n)
	{
		sum=sum+i;
		i+=d;
		c++;
		d++;
	}
	printf("Sum=%d",sum);
	return 0;
}
