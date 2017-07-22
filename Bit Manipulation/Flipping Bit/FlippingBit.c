#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) 
{
    unsigned int T;
    scanf("%u",&T);
    unsigned int *no;
    no = (unsigned int *)malloc(T*sizeof(unsigned int));
    int i = 0;
    
    for(i = 0; i < T; i++)
    {
        scanf("%u",&no[i]);
    }
        
	// your code goes here
	for(i = 0; i < T; i++)
    {
       printf("%u\n", ~no[i]);
    }
	
	return 0;
}
