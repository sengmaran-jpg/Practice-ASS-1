#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n=get_int("Enter n: ");
int i;

for(i=0; i<=n;i=i+2)
{
    printf("%d\n",i);
}
return 0;

}
