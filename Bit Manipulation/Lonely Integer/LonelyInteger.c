#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int lonelyinteger(int a_size, int* a) 
{
    int i, j, flag = 0, odd_num;
    for(i = 0; i < a_size; i++)
    {
        for(j = 0; j < a_size; j++)
        {
            if(i == j)
            {    
                continue;
            }    
            else
            {
                if(a[i] == a[j])
                {
                    //printf("\na[i]->%d   a[j]->%d", a[i],a[j]);
                    flag = 1;
                    
                }
            }
            //printf("\n flag -> %d", flag);
        }
        if(flag != 1)
        {
            //printf("\na[i]->%d", a[i]);
            odd_num = a[i];
        }
        flag = 0;
    }    
    return odd_num;
}
int main() {
    int res;
    
    int _a_size, _a_i;
    scanf("%d", &_a_size);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    
    res = lonelyinteger(_a_size, _a);
    printf("%d", res);
    
    return 0;
}
