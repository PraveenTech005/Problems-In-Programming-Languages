#include <stdio.h>

int main()
{
    int i, j, n, leap;
    printf("Enter Current Year : ");
    scanf("%d",&n);

    leap = n;
    j=0;
    again:
    if(leap%4==0)
    {
        if(j==0)
            printf("It's A Leap Year :)\nCurrent ");
    }
    else
    {
        printf("It's Not A Leap Year ! \nAnyways :)\nComing ");
        j = 1;
        leap+=1;
        goto again;
    }

    printf("Leap Year : %d\n\nNext 10 Leap Years Are : ",leap);
    for(i=0;i<10;i++)
        printf("\n%d",leap+=4);
}