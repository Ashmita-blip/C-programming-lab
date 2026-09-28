//0,1,1,2,3,5,8... upto n terms.W.C.P. to display the given sequence.//
#include <stdio.h>
int main()
{
	int n,a,b,c,f;
	printf("enter the value of n terms:");
	scanf("%d",& n);
	a=0;
	b=1;
	c=0;
	while(c<n)
	{
		printf("%d\t",a);
		f=a+b;
		a=b;
		b=f;
		c++;
	}
	return 0;
}
