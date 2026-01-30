#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int n= get_int("Enter number: ");
 int i;

 for(i=1; i<=n; i++)
 {

    printf("%d multiples of 3: %d\n",n,i*3);
 }

return 0;


}
