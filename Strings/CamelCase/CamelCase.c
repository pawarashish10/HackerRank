#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);
    int count = 1;
    for(int i = 0;i<strlen(s);i++)
    {
        if(s[i] <=90 && s[i]>=65)
            count++;
    }
    printf("%d",count);
    return 0;
}
