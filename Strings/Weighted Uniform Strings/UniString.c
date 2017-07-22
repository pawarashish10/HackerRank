#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    int* arr = (int *)malloc(512000 * sizeof(int));
    unsigned long* arr2 = (unsigned long *)malloc(512000 * sizeof(unsigned long));
    scanf("%s",s);
    /*for(int i = 0; i < strlen(s); i++)
    {
        
        arr[i] = 0;
    }*/
    arr[0] = s[0] - 96;
    for(int i = 1; i < strlen(s); i++)
    {
        unsigned long val = s[i] - 96;
        if(s[i] == s[i-1])
            arr[i] = arr[i-1]+val;
        else
            arr[i] = val;
    }
    
    /*for(int i = 0; i < strlen(s); i++)
    {
        
        printf(" %d",arr[i]);
    }*/
    int n; 
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        int x; 
        scanf("%d",&x);
        int flag = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            if(arr[i] == x)
            {
               flag = 1;
               break; 
            }
             
        }
             if(flag==1)  
               printf("Yes\n");
            else
             printf("No\n");
        // your code goes here
    }
    return 0;
}