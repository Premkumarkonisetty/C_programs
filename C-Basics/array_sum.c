#include<stdio.h>
int main()
{
	int i,sum=0;
	int array[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
		sum=sum+array[i];
	}
		printf("The sum of these elememts are: %d",sum);

}
