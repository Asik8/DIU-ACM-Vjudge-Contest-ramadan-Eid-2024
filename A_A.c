#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{

    lli n, count = 0;
    scanf("%lld", &n);

    printf("%lld\n",(n*(n+1)/2)-(n-1));
    return 0;
}