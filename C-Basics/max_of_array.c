#include<stdio.h>
void main()
{
	int min,i;
		int array[7];
		//int max;
		printf("enter array elements: ");
		for(i=0;i<7;i++)
		{
			scanf("%d",&array[i]);
		}
		min=array[0];
		for(i=1;i<7;i++)
		{
			if(array[i]<array[0])
			{
				min=array[i];
		
		        }
	
		}		printf("The minimum number is: %d",min);
}
				

