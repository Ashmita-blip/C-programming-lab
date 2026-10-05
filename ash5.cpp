//W. C P. to count the digits of a whole number//                                                                               
#include<stdio.h>
int main()
{
	int n,r,c;
	printf("Enter a number:");
	scanf("%d",& n);
	c=0;
	while (n>0)
	{
		r=n%10;
		printf("%d\n",r);
		n=n/10;
		c++;
	}
	printf("Count of the digits=%d",c);
	return 0;
}
