#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a_size,b_size;
    int i,j,k;
    int *arr,*brr,*trr,*cntarr;
    arr = (int *)malloc(sizeof(int)*a_size);
    trr = (int *)malloc(sizeof(int)*a_size);
    cntarr = (int *)malloc(sizeof(int)*a_size);
    brr = (int *)malloc(sizeof(int)*b_size);
    cin>>a_size;
    for(i = 0;i < a_size; i++)
    {
        cin>>arr[i];
    }
    for(i = 0;i < a_size; i++)
    {
        cntarr[i] = 0;
    }
    cin>>b_size;
    for(i = 0;i < b_size; i++)
    {
        cin>>brr[i];
    }
    int flag = 0;
    for(i = 0;i < a_size; i++)
    {
        for(j = 0;j < a_size; j++)
        {
            if(arr[i] == arr[j])
           {
                for(k = 0;k < a_size; k++)
                {
                    if(arr[j]==trr[k])
                    {
                       //trr[i] = arr[i];
                       //cntarr[i]++; 
                        flag = 1;
                    }
                    //else if(arr[j]==trr[k])
                    //{
                    //    cntarr[i]++;
                    //}
                } 
                if(flag == 0)
                {
                    trr[i] = arr[i];
                    
                }
                else
                {
                    //cntarr[i]++;
                }
                flag = 0;
            }
        }
    }
    
    
    for(i = 0;i < a_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i = 0;i < b_size; i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    for(i = 0;i < a_size; i++)
    {
        cout<<trr[i]<<" ";
    }
    cout<<endl;
    for(i = 0;i < a_size; i++)
    {
        cout<<cntarr[i]<<" ";
    }
    return 0;
}