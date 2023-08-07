#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
        int opt;
        FILE *fp;
        fp=fopen("argv[argc-1]","r");
        while((opt=getopt(argc,argv,"abc"))!=-1)
        {
                switch(opt){
                        case 'a':
                                printf("In a\n");
                                //getnumberoflines(fp);
                                break;

                        case 'b':
                                printf("IN b\n");
                                break;
                        case 'c':
                                printf("In c\n");
                                break;
                        case '?':
               			printf("Invalid Command");
                                break;
                }
        }


        exit(0);
}
