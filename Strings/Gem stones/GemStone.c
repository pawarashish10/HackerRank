#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int arr[26] = {0}, n, count = 0;
    char *s = (char *)malloc(100*sizeof(char));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   scanf("%d", &n);
   for(int i = 0; i < n; i++)
   {
       scanf("%s",s);
       for(int j = 0; j <strlen(s); j++)
       {
           for(int k = 97; k <= 122; k++)
           {
               if(s[j] == k)
                if(arr[k-97] == i )
                    arr[k-97] += 1; 
           }
       }
       //for(int i = 0;i<26;i++)
        //printf("%d ",arr[i]);
       //printf("\n");
   }
    for(int i = 0;i<26;i++)
        if(arr[i] == n)
         count++;
    printf("%d",count);
    return 0;
}