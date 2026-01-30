#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int x =get_int ("Enter X: ");

 while(x<=10)
 {
   printf("%d\n",x);
   x++;
 }

return 0;

}
