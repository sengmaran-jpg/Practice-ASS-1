#include <cs50.h>
#include <stdio.h>

int main(void)
{

   int n= get_int ("Enter n: ");


   if(n>1)
   {
    if(n%2!=0 || n==2)
     {
       if(n%1==0 && n%n==0)
       {
        printf("Prime number");
       }
     }
   else
     {
    printf("Not prime number");
     }
   }



return 0;

}
