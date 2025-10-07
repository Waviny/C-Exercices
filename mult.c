#include <stdio.h>

int main()
{
    int number;
    int result;

    printf("Veuillez saisir la taille de la table : ");
    scanf("%d", &number);

    for (int i = 0; i<number+1; i++) {
        result = 10*i;
        printf("%d * 10 = %d\n", i, result);
    }
}