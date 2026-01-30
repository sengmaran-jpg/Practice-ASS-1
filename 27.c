#include <cs50.h>
#include <stdio.h>
 int main(void)
 {
  int n= get_int("Enter n: ");
  int num=1;

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d",num);
      num ++;
    }
 printf("\n");
 }
 return 0;
 }
