#include <stdio.h>  
#include <string.h>

int main(int argc, char* argv[]) 
{ 
    printf("%d",argc);
    volatile int len = strlen(argv[1]);

    if(argc + len < argc && len >= 0)
        printf("smaller");
    else
        printf("bigger");
 

    return 0; 
} 