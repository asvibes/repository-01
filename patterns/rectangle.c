#include<stdio.h>
int main()
{
    int length, breadth, i, j;
    scanf("%d %d", &length, &breadth);
    for(i=1; i<=length; i++)
    {
        for(j=1; j<=breadth; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}