#include<stdio.h>
int main()
{
	int i;
		char name[]="prem kumar konisetty";
		printf("The string is %s",name);
		printf("The character is %c\n",name[0]);
		printf("The character is %c\n",name[7]);
		printf("The character is %c\n",name[3]);
		for(i=0;name[i]!='\0';i++)
		{
			if(name[i]=='k')
			{
				name[i]='p';
				break;
			}
		}
	//	printf("%s",name);
		name[6]='k';
		
		printf("%s",name);

}
