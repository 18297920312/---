#include<stdio.h>
#include<stdlib.h>
#include"head.h"

void bubble(int *a,int n)
{
    for(int i = 1;i < n;i++)
    {
        int flag = 1;
        for(int j = 0;j < n-i;j++)
        {
            if(a[j] > a[j+1])
            {
                flag = 0;
                int t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
        if(flag)
        {
            break;
        }
    }
}

int main(int argc,const char *argv[])
{
    int arr[] = {3,7,2,1,4,5,8,0};
    bubble(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
       printf("%d  ",arr[i]); 
    }
    putchar(10);
   return 0;
}