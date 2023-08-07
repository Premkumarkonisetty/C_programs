//unsorted missing element




#include<stdio.h>
int main()
{
	int i ,a[20],size,h[20],j,k;
	printf("enter the size of array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter element number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(j=0;j<size;j++)
	{
		h[a[i]]++;
	}
	for(k=0;k<size;k++)
	{
		if(h[i]==0)

			printf("%d",i);
	}
}
