#include<stdio.h>
int main()
{
	int num,cube,i,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		cube=i*i*i;
		printf("The cubic root of %d number is: %d \n",i,cube);
		sum=sum+cube;
	}
	printf("the sum of %d cubic numbers are: %d",i,sum);
}

