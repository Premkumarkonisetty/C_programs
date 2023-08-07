


#include<stdio.h>


int fun1(int n,int arry[15])
{
	
	int i,sum=0;
	float avg;
	for(i=0;i<n;i++)
        {
        	sum=sum+arry[i];
        }
	avg=sum/n;
	printf("The average is: %f",avg);

 
 }
