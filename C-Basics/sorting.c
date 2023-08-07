#include<stdio.h>
int main()
{
        int i,k, size,a[20];
        printf("Enter the size: ");
        scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		k=a[0];
		if(a[0]<a[i])
	printf("%d",a[i]);
	}


}

