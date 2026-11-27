//W C P to find the average in an array //
#include<stdio.h>
int main()
{
	int i,n;
	float sum=0,average=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter no%d element=",i+1);
		scanf("%d",& a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=sum/n;
	printf("The average is =%.2f",average);
	return 0;
}
