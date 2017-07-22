#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) 
{
    int i,j, max = 0, exor;
    
    for(i = l; i <= r; i++)
    {
        for(j = l; j <= r; j++)
        {
            exor = i ^ j;
            if(exor > max)
            {
                max = i ^ j;
                //printf("\nmax -> %d", max);
                
            }
        }
    }
return max;
}
int main() 
{
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
