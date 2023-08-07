#include<stdio.h>
int main()
{
	int a[20],size,i,j,b[20];
	printf("Enter the size: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<size;i++)
	{
		b[i]=a[i];
		printf("%d",b[i]);
	}
}
