#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c)
    {
      printf("%d number is greatest",a);
    }
    else if (b>a && b>c)
    {
      printf("%d number is greatest",b);
    }
    else{
      printf("%d number is greatest",c);
    }
    return 0;
}
