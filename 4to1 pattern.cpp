/*W.C.P. to print the following pattern
    4
   434
  43234
 4321234
  43234
   434
    4  */
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the number of lines:");
	scanf("%d",& n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=n;j>=n+1-i;j--)
		{
			printf("%d",j);
		}
		for(j=n+2-i;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
