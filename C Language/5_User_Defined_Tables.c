#include <stdio.h>

int main()
{
    int t, n, i;
    printf("\nEnter A Table You Want : ");
    scanf("%d",&t);
    printf("\nNumber Upto : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("\n%d X %d = %d",t, i, t*i);
}
