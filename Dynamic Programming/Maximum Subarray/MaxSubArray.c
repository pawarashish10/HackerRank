#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long calculate_sum(long *arr, long len)
{
	long sum = 0,i;
	for (i = 0; i<len; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}

long find_min(long *arr, long len)
{
	long min = arr[0], i;
	for (i = 0; i<len; i++)
	{
		if (arr[i] > min) {
			min = arr[i];
		}
	}
	return min;
}


int main() 
{
	long n, len, i, s, t,j,flag=0;
	long * arr;
	long sum,final_sum, an_sum = 0;
	scanf("%ld",&n);
	while (n > 0)
	{
		scanf("%ld", &len);
		arr = (long *)malloc(sizeof(long)*(len+1));
		for (i = 0; i < len; i++)
		{
			scanf("%ld",&arr[i]);
		}
		final_sum = arr[0];
		for (s = 0; s < len; s++)
		{
			for (t = 1; t <= len - s; t++)
			{
				sum = calculate_sum(&arr[s], t);
				if (sum >= final_sum)
				{
					final_sum = sum;
				}
				//printf("\nsum %d", sum);
			}
		}
		//printf("sum %d",final_sum);

		for (j = 0; j<len; j++)
		{
			if (arr[j] > 0)
			{
				an_sum += arr[j];
				flag = 1;
			}
			if (flag == 0)
			{
				an_sum = find_min(arr,len);
			}
		}
		printf("%ld %ld\n", final_sum, an_sum);
		flag = 0;
		an_sum = 0;
		n--;
	}
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}