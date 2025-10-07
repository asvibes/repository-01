#include <stdio.h>
int main()
{
    char alphabet;
    scanf("%c",&alphabet);
    if (alphabet== 'a' ||
    alphabet== 'e' ||
    alphabet=='i'||
    alphabet=='o' ||
    alphabet=='u' ||alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
    {
      printf("is vowels");
    }
    else
    {
      printf("is consonant");
    }
    return 0;
}
