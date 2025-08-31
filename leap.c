#include <stdio.h>
int main()
{
  int year;
  scanf("%d",&year);
  if(year %4==0){
    printf("%d year is leap year",year);
  }
  else{
    printf("%d year is not leap year",year);
  }
  return 0;
}
