//W C P to find the smallest number within an array //
#include<stdio.h>
int main()
{
	int a[5],i,min=a[0];
	for(i=0;i<5;i++)
	{
		printf("enter no%d element=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("The smallest number is =%d",min);
	return 0;
}
