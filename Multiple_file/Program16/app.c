



#include<stdio.h>
#include"prem.h"
int main()
{
	int a,b;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);

	printf("Addition of two numbers is : %d\n",add(a,b));
	printf("Subtraction of two numbers is : %d\n",sub(a,b));
	printf("multiplication of two numbers is : %d\n",mul(a,b));
	printf("division of two numbers is : %d\n",div(a,b));
	
}
