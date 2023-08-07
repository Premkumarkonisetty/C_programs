#include <stdio.h>
void main()
{
   int i,j,rows,k=1,h=2;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=2;i<=rows;i++)
   {
	if(i%2==0)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
	}
	 	printf("\n");
	
   }
}
