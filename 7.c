#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int x= get_int("Enter the frist number: ");
 int y= get_int("Enter the second number: ");

 if(x>y)
 {
    printf("%d is greader than %d",x,y);
 }
 else if(x<y)
 {
    printf("%d is less than %d",x,y);
 }
 else
 {
    printf("Equal");
 }
 return 0;
}
