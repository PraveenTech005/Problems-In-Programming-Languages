#include <stdio.h>

int main()
{
    int n, i, j, prime;
    printf("\nEnter A Limit : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        prime=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                prime++;
        }
        if(prime==0)
            printf("\n%d",i);
    }
}