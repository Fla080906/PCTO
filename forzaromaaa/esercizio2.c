#include <stdio.h>


int main()
{
    char c;
    printf("Inserisci lettera\n");
    scanf("%c", &c);
    if((c == 97) || (c == 101) || (c == 105) || (c == 111) || (c == 117))
    {
        printf("Il carattere è una vocale\n");
    }
    else
    {
        printf("Il carattere è una consonante\n");
    }
    return(0);
}
