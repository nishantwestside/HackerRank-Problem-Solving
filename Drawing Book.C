#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n, p;
    int A1,A2;
    scanf("%d",&n);
    scanf("%d",&p);
   
    A1=p/2;
    A2=(n-p)/2;
    if(A1 > A2)
    {
        printf("%d",A2);
    }
    else
    {
        printf("%d",A1);
    }

    return 0;
}