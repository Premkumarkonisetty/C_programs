#include<stdio.h>
int main()
{
	int i,a[11],sum=0,sumn=0;
//	int len=sizeof(a)/sizeof(int);
	int size;
	printf("Enter the size of arry: ");
	scanf("%d",&size);
//	printf("Enter the elements: ");
	for(i=0;i<size;i++)
	{
		printf("enter element number %d: ",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	int start=a[0];
	int end=a[size-1];
	for(i=start;i<=end;i++)
	{
		sumn=sumn+i;
	
	}
	      int out=sumn-sum;
	printf("the missing element is: %d",out);
}


