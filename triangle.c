
#include <stdio.h>

int main()
{
    int i,a;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
            
        }
        printf("\n");
    }  
    return 0;
}