#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n=get_int("Enter number: ");
  int i,m;

 for(i=1; i<=10;i++)
 {
    m=i*n;
     printf("%d *%d= %d\n",n,i,m);
 }
 
 return 0;
}
