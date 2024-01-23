#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Inserisci il primo numero\n");
    scanf("%d", &a);
    printf("Inserisci secondo numero\n");
    scanf("%d", &b);
    if (a > b)
    {
        printf("a è maggiore di b\n");
    }
    else if (a == b)
    {
        printf("a è uguale a b\n");
    }
    else 
    {
        printf("b è maggiore di a\n");
    }
    return(0);
}