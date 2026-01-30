#include <cs50.h>
#include <stdio.h>

int main(void)
{
int age= get_int("Enter age: ");
int stutus=get_int("Are you student?: ");


if (age<12)
{
    printf("ticket price: 50\n");
}
else if(age>=12 && age<60)
{
    if(stutus==1)
    {
        printf("ticket price: 80\n");
    }
    else
    {
        printf("ticket price: 100\n");
    }
 }
else
{
  printf("ticket price: 60\n");
}

return 0;

}
