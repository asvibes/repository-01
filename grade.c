#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a >= 90) {
        printf("A grade");
    }
    else if (a >= 80 && a < 90) {
        printf("B grade");
    }
    else if (a >= 70 && a < 80) {
        printf("C grade");
    }
    else if (a >= 60 && a < 70) {
        printf("D grade");
    }
    else {
        printf("Fail");
    }

    return 0;
}
