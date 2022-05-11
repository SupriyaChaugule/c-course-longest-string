#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *longestString= "";
    int index;
    if (argc > 1)
    {
       index = 1;
       for (int i = 2; i < argc; i++)
       {
         if (strlen(argv[index]) < strlen(argv[i]))
         {
             index = i;
         }
       }
       longestString = argv[index];
    }
    puts(longestString);
    return EXIT_SUCCESS;
}