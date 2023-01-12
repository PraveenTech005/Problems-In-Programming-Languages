#include <stdio.h>

int main()
{
    int n, i;
    printf("\nEnter A Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%5==0 && i%3==0)
            printf("\n%d - FizzBuzz",i);
        else if(i%5==0)
            printf("\n%d - Buzz",i);
        else if(i%3==0)
            printf("\n%d - Fizz",i);
        else
            printf("\n%d",i);
    }
}
