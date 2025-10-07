#include <stdio.h>
int main()
{
    int a = 89, b = 90, c = 5;
    float avg = (float)(a + b + c) / 3;
    
    printf("Values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("Total = %d\n", a + b + c);
    printf("Average = %.2f\n", avg);
    printf("Grade = %c\n", avg >= 60 ? 'P' : 'F');
    
    return 0;
}
