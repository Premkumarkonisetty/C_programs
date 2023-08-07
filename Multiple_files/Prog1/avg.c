#include<stdio.h>
#include"header1.h"


int main()
{
        int i,n,arry[15];
	
 	printf("enter the number of elements: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        	printf("Enter the number %d: ",i+1);
                scanf("%d",&arry[i]);
        }
	
	fun1(n,arry);
	
}

