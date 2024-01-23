#include <stdio.h>

int main()
{
    int a;
    printf("Quanti anni hai?\n");
    scanf("%d", &a);
    if ( a > 18)
    {
        printf("Sei maggiorenne\n");
    }
    else 
    {
        printf("Sei minorenne\n");
    }
    return(0);

}