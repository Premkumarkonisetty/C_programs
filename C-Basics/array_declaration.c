#include<stdio.h>
int main()
{
	int a[10],sum=0;
	for(int i=0;i<10;i++)
	{
		printf("enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	float avg;
	avg=sum/10;
	printf("sum is %d and average is %f",sum,avg);
}

