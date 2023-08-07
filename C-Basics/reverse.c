#include<stdio.h>

int main()
{
        int a[30],size,i;
        printf("Enter the size: ");
        scanf("%d",&size);
        for(int i=0;i<size;i++)
       	{
               	printf("Enter the num %d:  ",i+1);
               	scanf("%d",&a[i]);
       	}
	for(int i=size-1;i>=0;i--)	
	{
		printf("%d\n",a[i]);
	}
}

		
