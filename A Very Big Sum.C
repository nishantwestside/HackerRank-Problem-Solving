#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long sum(long arr[],int n)
{
    int i=0;
    long sum;
    while(i<n)
    {
        sum =sum+arr[i];
        i++;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    long arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%lu",&arr[arr_i]);
    }
    printf("%lu",sum(arr,n));
    return 0;
}
