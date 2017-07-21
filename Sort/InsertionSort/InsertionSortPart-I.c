#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) 
{
    int i,j,k, temp;
    for(k = 0; k <= ar_size; k++)
    {
        for(i = 0; i <= ar_size-1; i++)
        {
            if(ar[i]>ar[i+1])
            {
                temp = ar[i+1];
                ar[i+1] = ar[i];
                for(j=0;j<ar_size;j++)
                    printf("%d ",ar[j]);
                printf("\n");
                ar[i] = temp;
            }
            
        }
    }
    for(j=0;j<ar_size;j++)
                    printf("%d ",ar[j]);
}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
    return 0;
}