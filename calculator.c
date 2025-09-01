#include <stdio.h>
int main()
{
    int a,b;
    char operation;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf(" %c", &operation);
    if (operation == '+'){
      printf("%d\n",a+b);
    }
    else if(operation=='-'){
      printf("%d\n",a-b);
    }
    else if(operation=='*'){
      printf("%d\n",a*b);
    }
    else if (operation=='/'){
      printf("%d\n",a/b);
    }
    else{
      printf("invalid operation");
    }
    return 0;
}
