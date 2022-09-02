#include <stdio.h>
#include <stdlib.h>
long int fatorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        printf("Nao existe fatorial de numero negativo");
        exit(0);
    }
    return n*fatorial(n-1);
}
int main()
{
    int n;
    printf("Digite um numero:");
    scanf("%d",&n);
    printf("%d",fatorial(n));
}
