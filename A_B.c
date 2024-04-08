#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
        int xr1,xr2,xw1,xw2;
        scanf("%d %d %d %d",&xr1,&xr2,&xw1,&xw2);

        if(abs(xr1) < abs(xw1))
        {
            printf("Russo\n");
        }
        else if(abs(xr1) == abs(xw1))
        {
            if(abs(xr2)<abs(xw2))
                printf("Russo\n");
            else if(abs(xr2)>abs(xw2))
                printf("Wil\n");
            else
                printf("Empate\n");
        }
        else
            printf("Wil\n");
    return 0;
}