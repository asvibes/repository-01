#include <stdio.h>

int main()
{
    char a;
    int k;
    scanf("%c",&a);
    
    for(char i ='A';i<=a;i++)
    {
        k=i-'A'+1;
        for(char j='A';j<=i;j++)
        {
            
            printf("%c%d",i,k);
           
        }
        printf("\n");
    }


    return 0;
}