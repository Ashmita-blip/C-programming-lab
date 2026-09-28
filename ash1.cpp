//2+5+8+11+14+... upto n terms.W.C.P. to calculate sum of the given series.//
#include <stdio.h>
int main()
{
	int n,c,i,sum;
	printf("enter the value of n terms:");
	scanf("%d",& n);
	i=2;
	sum=0;
	c=0;
	while(c<n)
	{
		sum=sum+i;
		i+=3;
		c++;
	}
	printf("Sum=%d",sum);
	return 0;
}
