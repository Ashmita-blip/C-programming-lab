//W. C P. to calculate sum of digits//                                                                               
#include<stdio.h>
int main()
{
	int n,r,sum;
	printf("Enter a number:");
	scanf("%d",& n);
	sum=0;
	while (n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	printf("Sum=%d",sum);
	return 0;
}
