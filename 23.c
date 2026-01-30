#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  int n=get_int("Enter n: ");
  int count=0;
  while(n!=0)
  {
    n=n/10;
    count++;
  }

 printf("Number of digits= %d",count);
return 0;
}


