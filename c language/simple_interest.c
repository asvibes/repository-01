#include <stdio.h>
int main()
{
    float amount,principal,timee,simple_interest;
    scanf("%f",&amount);
    scanf("%f",&principal);
    scanf("%f",&timee);
    simple_interest=(principal*amount*timee)/100;
    printf("%.2f",simple_interest);
}
