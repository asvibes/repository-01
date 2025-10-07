#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%b==0){
      printf("Divisible");
    }
    else{
      printf("not divisible");
    }
    return 0;
}
