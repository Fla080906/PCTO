#include <stdio.h>

int main()
{
    int tre;
    int sei;
    int nove;
    printf("Inserisci primo numero\n");
    scanf("%d", &tre);
    printf("Inserisci secondo numero\n");
    scanf("%d", &sei);
    printf("Inserisci terzo numero\n");
    scanf("%d", &nove);
    if (sei-tre == nove-sei)
    {
        printf("I numeri sono in progrressione aritmetica\n");
    }
    else
    {
        printf("I numeri non sono in progressione aritmetica");
    return(0);
}
}