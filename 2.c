#include <cs50.h>
#include <stdio.h>

int main(void)
{
  float C= get_float ("Enter celsius: ");
  float F;

  F= (9*C +(32*5))/5;

  printf(".2%f of celcius is %.2f of fahrenheit",C,F);

  return 0;

}


