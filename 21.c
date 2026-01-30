#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int n=get_int("Enter n: ");
 int i,sum=0;

 for (i=1; i<=n; i++)
 {
    if(i%2==0)
    {
     sum+=i;
    }
 }
printf("sum: %d\n",sum);

return 0;
}
