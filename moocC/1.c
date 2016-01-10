#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
   char cmd[128];
     
    scanf("%s", cmd);
     
   if (!strcmp(cmd, "help"))
    { 
        printf("%s\n", cmd);
    }
   

}
