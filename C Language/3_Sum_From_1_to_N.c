#include <stdio.h>

int main()
{
    int n, i, sum=0;
    printf("\nEnter A Number For N : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        sum += i;
    printf("\nSum From 1 To N : %d",sum);
    
}
