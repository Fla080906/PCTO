#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int a;
    int b;
    printf("Inserisci età Giacomo\n");
    scanf("%d", &x);
    printf("Inserisci età Simone\n");
    scanf("%d", &y);
    printf("Inserisci età Francesco\n");
    scanf("%d", &z);
    printf("Inserisci età Flavio\n");
    scanf("%d", &a);
    printf("Inserisci età Adrea\n");
    scanf("%d", &b);
    printf("Giacomo ha %d anni\n ", x);
    printf("Simone ha %d anni\n", y);
    printf("Francesco ha %d anni\n", z);
    printf("Flavio ha %d anni\n", a);
    printf("Andrea ha %d anni\n", b);
    printf("Somma delle età=%d\n", x+y+z+a+b);
   return (0);

}
