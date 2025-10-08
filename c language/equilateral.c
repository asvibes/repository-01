#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d",&a);
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    if (i == 6)
    {
      /* jump out of the loop and print the message once */
      goto label;
    }
    printf("%d\n", i);
  }

  /* normal exit when loop completes without hitting i == 6 */
  printf("Loop finished\n");
  return 0;

label:
  printf("you entered 6\n");
  return 0;

}