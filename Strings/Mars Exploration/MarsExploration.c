Sami's spaceship crashed on Mars! She sends n sequential SOS messages to Earth for help.

Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received 
by Earth as a string,S, determine how many letters of Sami's SOS have been changed by radiation.

Input Format

There is one line of input: a single string,S.

Note: As the original message is just SOS repeated n times, S's length will be a multiple of 3.

Output Format

Print the number of letters in Sami's message that were altered by cosmic radiation.

Sample Input 0
SOSSPSSQSSOR

Sample Output 0
3
Sample Input 1
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* S = (char *)malloc(10240 * sizeof(char));
    scanf("%s",S);
    int i,count,len;
    len = strlen(S);
    if(len %3 != 0)
        len -=(len%3);
    //printf("%d",len);

    count = len%3;
    //printf("%d",count);

    for(i = 0; i < len;i = i + 3)
    {
        if(S[i] != 'S')
            count++;
        if(S[i+1] != 'O')
            count++;
        if(S[i+2] != 'S')
            count++;
    }
    printf("%d",count);
    return 0;
}

SOSSOT
Sample Output 1
1
Explanation
Sample 0
S = SOSSPSSQSSOR, and signal length |S| = 12. Sami sent 4 SOS messages (i.e.:12/3=4 ).

Expected signal: SOSSOSSOSSOS
Recieved signal: SOSSPSSQSSOR

We print the number of changed letters, which is .

Sample 1

 = SOSSOT, and signal length . Sami sent  SOS messages (i.e.: ).

Expected Signal: SOSSOS 
Received Signal: SOSSOT

We print the number of changed letters, which is .