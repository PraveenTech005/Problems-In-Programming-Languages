#include <stdio.h>

int main()
{
    int a[100], i, s=2147483647, n;
    printf("\nEnter The Limit : \n");
    scanf("%d",&n);
    printf("\nEnter 5 Numbers To Find Smallest One : \n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]<s)
            s=a[i];
    }

    printf("\nSmallest Number Is : %d",s);
}