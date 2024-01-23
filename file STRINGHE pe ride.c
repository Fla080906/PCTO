#include <stdio.h>
#include <string.h>

int main()
{
    char choice[50];
    printf("Che te magni?");
    scanf("%s", choice);
    for (int i = 0; i < strlen(choice); i++) {
        choice[i] = tolower(choice[i]);
    }
    if (strcmp(choice, "pizza") == 0 || strcmp(choice, "pasta") == 0 || strcmp(choice, "carne") == 0 || strcmp(choice, "sushi") == 0 || strcmp(choice, "gelato") == 0)
    {
        printf("Bono nculo\n");
    }
    else{
        printf("Bella merda\n");
    }
}