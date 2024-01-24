#include <stdio.h>

void addizione(int a, int b)
{
    printf("La somma dei numeri è uguale a:%d\n", (a+b));
}

void sottrazione(int a, int b)
{
    printf("La differenza tra i numeri è uguale a:%d\n", (a-b));
}

void moltiplicazione(int a, int b)
{
    printf("Il prodotto dei numeri è uguale a:%d\n", (a*b));
}

void divisione(int a, int b)
{
    printf("Il quoziente è uguale a:%d\n", (a/b));
}

int main()
{
    int x;
    int y;
    int z;

    printf("Inserisci primo numero\n");
    scanf("%d", &x);
    
      printf("Inserisci secondo numero\n");
    scanf("%d", &y);
    
    printf("CHe operazione vuoi svolgere?\n");
    
    printf("Premi 1 per addizione\nPremi 2 per sottrazione\nPremi 3 per moltiplicazione\nPremi 4 per divisione\n");
    scanf("%d", &z);

    if (z == 1)
    {
        addizione(x, y);
    }
    else if (z == 2)
    {
        sottrazione(x, y);
    }
    else if (z == 3)
    {
        moltiplicazione(x, y);
    }
    else if (z == 4)
    {
        divisione(x, y);
    }
    return(0);

}