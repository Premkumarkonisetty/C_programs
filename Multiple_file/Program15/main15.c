#include<stdio.h>
#include"header15.h"
int main()
{
	char A[20]="PREM";
	int choice;
	printf("Enter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			change_upper(A);
			break;
		case 2:
			change_lower(A);
			break;
		case 3:
			swap_char(A);
			break;


	}
}
