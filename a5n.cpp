//W.C P. to display odd numbers from 1 to n//
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter numbers:");
	scanf("%d",& n);
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
