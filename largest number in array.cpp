//W C P to find the largest number within an array //
#include<stdio.h>
int main()
{
	int a[5],i,max=a[0];
	for(i=0;i<5;i++)
	{
		printf("enter no%d element=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("The largest number is =%d",max);
	return 0;
}
