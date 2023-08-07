#include<stdio.h>
#include<string.h>
int main()
{
	char alphabet[45];
	printf("Enter the string:");      
	gets(alphabet);

	printf("%ld\n",strlen(alphabet));
	printf("%ld",sizeof(alphabet));
}
