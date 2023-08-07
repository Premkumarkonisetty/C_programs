// it shows maximum number in array

#include<stdio.h>
int main()
{
        int a[10];
        for(int i=0;i<10;i++)
        {
                printf("enter %d element: ",i+1);
                scanf("%d",&a[i]);
        }
	int k=a[0];
        for(int i=0;i<10;i++)
        {
       		if(k<a[i])
			k=a[i];
        }
  		printf("%d is maximaum",k);
	int p=a[0];
        for(int i=1;i<10;i++)
        {
       		if(p>a[i])
			p=a[i];
        }
  		printf("%d is minimum",p);
}

