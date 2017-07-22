#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main() {

    int T;
    scanf("%d",&T);
    //printf("-->%d",T);
    char **S, **R, **temp;
    int i,j;
    int flag_funny = 0;    
    S = malloc(T*sizeof(char *));
    for(i = 0; i < T; i++)
    {
        S[i] = malloc(10000*sizeof(char));
    }
    //R = (char *)malloc(T*sizeof(char));
    
    R = malloc(T*sizeof(char *));
    for(i = 0; i < T; i++)
    {
        R[i] = malloc(10000*sizeof(char));
    }
    
    temp = malloc(T*sizeof(char *));
    for(i = 0; i < T; i++)
    {
        temp[i] = malloc(10000*sizeof(char));
    }
    //strcpy(temp,S);
    for(i = 0;i < T; i++)
    {
        //scanf("%s",&S[i]);
        scanf(" %[^\n]",S[i]);
    }
    
    for(i = 0;i < T; i++)
    {
        //scanf("%s",&S[i]);
        //scanf(" %[^\n]",S[i]);
        strcpy(temp[i],S[i]);
        R[i] = strrev(temp[i]);
    }
    //int j;
    int s_diff, r_diff;
    for(i = 0;i < T; i++)
    {
        flag_funny = 0;
        int l = strlen(S[i]);
        for(j = 1; j < l; j++)
        {
            
            //printf("S-->%s\n",S[i]);
            //printf("R-->%s\n",R[i]);
            //printf("%c - %c = %c - %c\n",S[i][j],S[i][j-1],R[i][j],R[i][j-1]);
            //printf("%d - %d = %d - %d\n",S[i][j],S[i][j-1],R[i][j],R[i][j-1]);
            s_diff = (int)abs(S[i][j]-S[i][j-1]);
            r_diff = (int)abs(R[i][j]-R[i][j-1]);
            //printf("s_diff-->%d\n",s_diff);
            //printf("r_diff-->%d\n",r_diff);
            if(s_diff != r_diff)
            {
                //printf("in non funny");
                flag_funny = 1;
            }
            
        }
        //printf("\n%d",strlen(R[i]));
        if(flag_funny == 0)
        {
            printf("Funny\n");
        }
        else
        {
            printf("Not Funny\n");
        }
        //printf("\n\n");
    }
    return 0;
}