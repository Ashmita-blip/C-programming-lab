//W. A C P. to take an input as an array and display into the screen//
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of elements:");
	scanf("%d",& n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter value%d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
	return 0;
}
