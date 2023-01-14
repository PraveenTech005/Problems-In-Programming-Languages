#include <stdio.h>

int main()
{
    int a[100], i, b=0,n;
    printf("\nEnter The Limit : \n");
    scanf("%d",&n);
    printf("\nEnter 5 Numbers To Find Biggest One : ");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]>b)
            b=a[i];
    }

    printf("\nBiggest Number Is : %d",b);
}