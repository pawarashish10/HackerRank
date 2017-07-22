#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	char s[100], str[100];
	/*s = (char *)malloc(sizeof(char));
	char ch;
	int sze = 1;
	ch = getchar();
	s[sze -1] = ch;
	while(ch != '\n' )
	{
	sze++;
	ch = getchar();
	s = (char *)realloc(s,sze*sizeof(char));
	s[sze - 1] = ch;
	}
	s[sze - 1] = '\0';
	*/
	scanf("%s", s);
	int i, k, j = 0;
	int len = strlen(s);
	for (k = 0; k <= len; k++)
	{
		for (i = 0; i<strlen(s); i++)
		{
			if (s[i] == s[i + 1] && s[i] != 0 && s[i + 1] != 0)
			{
				//strcpy(s[i+1])
				s[i] = '0';
				s[i + 1] = '0';
			}
		}

		for (i = 0; i<strlen(s); i++)
		{
			if (s[i] != '0')
			{
				//printf("%c",s[i]);    
				str[j] = s[i];
				j++;
			}
		}
		str[j] = '\0';
		//printf("\n%s", str);
		strcpy(s, str);
		//printf("\n%s",s);
		j = 0;
	}

	if (strlen(s) == 0)
		printf("Empty String");
	else
		printf("%s", s);
	return 0;
}

//acdqglrfkqyuqfjkxyqvnrtysfrzrmzlygfveulqfpdbhlqdqrrqdqlhbdpfqluevfgylzmrzrfsytrnvqyxkjfquyqkfrlacdqj
//acdqgacdqj
