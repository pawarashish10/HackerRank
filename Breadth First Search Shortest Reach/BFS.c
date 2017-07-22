#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//#include <stdio.h>
//#include <stdlib.h>

struct node {
	int val;
	int distance;
	struct node * next;
};

struct node * insert(struct node * head, int num)
{
	// This is exactly as Head Insertion of a Linked List.
	// We choose Head Insertion to get an O(1) Insertion
	// into an Adjacency List, Tail Insertion can also be used

	struct node * p = (struct node *) malloc(sizeof(struct node));

	p->val = num;
	p->distance = -1;
	p->next = head;

	return p;
}


void BFS(struct node * adjacency_list[], int v, int *edge[2], int s, int *vis_arr, int *distance)
{
	int l,k;
	//printf("\nvisit List -\n");
	//for (l = 1; l <= v; ++l) 
	//{
	//   printf("- %d\t",vis_arr[l]);
	//}
	int dist = 0;
	//int flag = 0;

	distance[s] = dist;
	struct node * temp;
	struct node * prev = adjacency_list[s];
	//int dist_arr[50] = { 0 };
	for (k = 1; k <= v; ++k)
	{
		for (l = 1; l <= v; ++l)
		{
			//printf("%d -> ", s);
			//flag = 0;
			temp = adjacency_list[l];
			if (distance[l] == dist)
			{
				while (temp != NULL)
				{
					if (distance[temp->val] != -1)
					{
						temp = temp->next;
						continue;
					}
					distance[temp->val] = dist+6;
					temp = temp->next;


					/*
					if (vis_arr[temp->val] == 0)
					{
						printf("=%d= -> ", temp->val);
						//if (distance[temp->val] == -1);
						//{
						dist = dist + 6;
						//dist_arr[temp->val] == dist;
						distance[temp->val] = dist;
						printf("dist -> %d \t", dist);
						//}

						vis_arr[temp->val]++;
						//flag = 1;
						//goto A;
						temp = adjacency_list[temp->val];
						//continue;


					}
					else
					{
						prev = adjacency_list[temp->val];
						temp = temp->next;
					}
					*/
				}
			}
			//if (flag == 0)
			//{
			//dist = dist - 6;
			//}
			//dist = dist - 6;

			//printf("NULL\n");
		}
		dist += 6;
	}
	//printf("\n");
	for (l = 1; l <= v; ++l)
	{
		if (l != s)
			printf("%d ", distance[l]);
	}
}

int main()
{

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, i, j, k, l, m, v, e, s;
	int **edge;
	int *vis_arr;
	int *distance;
	scanf("%d", &n);


	for (i = 0; i<n; i++)
	{
		scanf("%d %d", &v, &e);
		struct node **adjacency_list;
		adjacency_list = (struct node **)malloc((v+1) * sizeof(struct node *));
		for (k = 0; k <= v; ++k)
			adjacency_list[k] = (struct node *)malloc((v + 1) * sizeof(struct node));
		//for (k = 0; k <= 1; ++k)
			//edge[k] = (int *)malloc(sizeof(int)*v + sizeof(int));
		int **edge = (int **)malloc(e * sizeof(int *));
		for (k = 0; k<e; k++)
			edge[k] = (int *)malloc(2 * sizeof(int));
		vis_arr = (int *)malloc(sizeof(int)*(v+1));
		distance = (int *)malloc(sizeof(int)*(v+1));
		for (k = 0; k <= v; ++k) 
		{

			adjacency_list[k] = NULL;
			vis_arr[k] = 0;
			distance[k] = -1;

		}

		for (j = 0; j < e; j++)
		{
			scanf("%d %d", &edge[j][0], &edge[j][1]);
			adjacency_list[edge[j][0]] = insert(adjacency_list[edge[j][0]], edge[j][1]);
			adjacency_list[edge[j][1]] = insert(adjacency_list[edge[j][1]], edge[j][0]);
		}

		/*printf("\nAdjacency List -\n");
		for (l = 1; l <= v; ++l)
		{
		printf("%d -> ", l);

		struct node * temp = adjacency_list[l];

		while (temp != NULL)
		{
		printf("%d -> ", temp->val);
		temp = temp->next;
		}

		printf("NULL\n");
		}
		*/
		scanf("%d", &s);
		(vis_arr[s]) = (vis_arr[s]) + 1;
		//printf("%d -> ", s);
		BFS(adjacency_list, v, edge, s, vis_arr, distance);

		printf("\n");
	}

	return 0;
}
