/*W.C.P. to print a star pattern in square format*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number of line:");
	scanf("%d",& n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
