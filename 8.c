
#include <cs50.h>
#include <stdio.h>

int main(void)
{
int x= get_int("Enter the year: ");

if ((x%4==0&& x%100!=0) ||x%400==0)
{
    printf(" Leap year");
}
else
{
 printf("Not leap year");
}
 return 0;
}
