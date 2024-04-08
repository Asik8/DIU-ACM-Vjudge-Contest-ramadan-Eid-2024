#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    int count;
    if(sum%5 !=0)
        count =(sum/5)+1;
    else
        count = sum/5;
    printf("%d\n",count);

    return 0;
}