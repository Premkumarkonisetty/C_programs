#include<stdio.h>



void fun9(int num,int n)
{

	int num2,num3;
	num2=1<<n;

	num3=num&num2;


	if(num3==0){
		printf("ON");
	}
	else{
		printf("OFF");
	}
}
