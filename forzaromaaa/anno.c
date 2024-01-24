#include <stdio.h>

int main()
{
 int annoluna = 1969;
 int annodinascita;
 
 printf("Inserisci l'anno in cui sei nato\n");
 scanf("%d", &annodinascita);
 
 int x = annodinascita-annoluna;
 int y = annoluna-annodinascita;

 if(x == 0)
 {
    printf("Sei nato l'anno in cui l'uomo è andato sulla Luna\n");
 }
 else if(x>0)
 {
    printf("Sei nato %d anni dopo che l'uomo è andato sulla Luna\n", x);
 }
 else
 {
    printf("Sei nato %d anni prima che l'uomo è andato sulla Luna\n", y);
 }
 return(0);

}