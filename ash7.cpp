//W. C P. to reverse the digits of a whole number//                                                                               
#include<stdio.h>
int main()
{
	int n,a,b,c,f,i;
	printf("Enter the value of n terms:");
	scanf("%d",& n);
	i=0;
	a=0;
	b=0;
	c=1;
	while (i<n)
	{
		printf("Tribonacci Series=%d\n",a);
		f=a+b+c;
		a=b;
		b=c;
		c=f;
		i++;
	}
	return 0;
}
