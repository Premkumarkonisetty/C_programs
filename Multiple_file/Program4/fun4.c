#include<stdio.h>
int fun4(int num)
{
        int i,cube,sum=0;
	for(i=0;i<=num;i++)
        {
        cube=i*i*i;
        printf("The cubic root of %d number is: %d \n",i,cube);
        sum=sum+cube;
        }
        printf("the sum of %d cubic numbers are: %d",i,sum);
}


