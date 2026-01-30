#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n= get_int("Enter n: ");
int i;
for(i=1;i<=n;i++)
{
    printf("%d\n",i);
}

return 0;

}
