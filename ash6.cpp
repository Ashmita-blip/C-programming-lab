//W. C P. to reverse the digits of a whole number//                                                                               
#include<stdio.h>
int main()
{
	int n,r,rev;
	printf("Enter a number:");
	scanf("%d",& n);
	rev=0;
	while (n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	printf("Reversed Number=%d",rev);
	return 0;
}
