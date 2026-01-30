#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int num= get_int("Enter a non-negative Integer: ");
  int factorial=1;

  for(int i=1;i<=num;i++)
  {
    factorial*=i;

  }

   printf("The factorial value of %i is %i\n", num,factorial);

   return 0;

}
