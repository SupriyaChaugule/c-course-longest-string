#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
    int INDEX;
    if(argc<=1)
    {
        puts("Empty string");
    }
    else
    {
       INDEX=1;
       for(int i=2;i<argc;i++)
       {
         if(strlen(argv[INDEX])<strlen(argv[i]))
         {
             INDEX=i;
         }
       }
       printf("%s\n",argv[INDEX]);
    }
    return EXIT_SUCCESS;
}