#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x= get_int("Enter number: ");

  if(x%2==0)
  {
    printf("The number is even");
  }
  else
  {
    printf("The numberis odd");
  }

return 0;


}
