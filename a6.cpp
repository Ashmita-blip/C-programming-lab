/*W.C P. to find the sum of the following series
 1!+3!+5!... upto n numbers*/
 //1!=1
 //3!=3*2*1=6
 //5!=5*4*3*2*1=120
 //upto n!
#include <stdio.h>
int main()
{
	int i,n,c,a,sum,fact;
	printf("enter numbers:");
	scanf("%d",& n);
	sum=0;
	a=1;
	c=0;
	while(c<n)
	{
		i=1;
		fact=1;
		while(i<=a)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		c++;
		a+=2;
	}
	printf("Sum=%d",sum);
	return 0;
}
