#include <stdio.h>
int main(){
    int a,b,j,i,prime;
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
        prime=1;
        if(i<=1)
        continue;

        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
                prime=0;
        }
        if(prime)
        {
            printf("%d ",i);
        }
    }
   return 0;

}


