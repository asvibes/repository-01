#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
      printf("%d number is positive",a);
    }
    else if(a<0)
    {
      printf("%d number is negative",a);
    }
    else{
      printf("%d number is 0",a);
    }
    return 0;
}
