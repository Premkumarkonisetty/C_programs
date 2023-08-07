#include<stdio.h>
int main()
{
	int size,a[20];
	printf("Enter the size: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int b[20];
	for(int j=0;j<size;j++)
	{
		b[j]=a[j];
		printf("%d",b[j]);
	}
}
