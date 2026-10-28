#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int fact=1;
    for(int i=1;i<=n;i++){
    fact=fact*i;
    }
    printf("factorial of the n is %d\n",fact);

    return 0;
}
